/*
 * Initial_test.c
 *
 *  Created on: May 1, 2019
 *      Author: lnogues
 */

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

//Functions
int multiplybytwo(int number){
	return number*2;
}

void freeBirds(){
	cout << "Ey baby let the free birds fly!"<< endl;
}

int runner() {
  static int count = 0;
  count++;
  return count;
}

void addOne(int* number) {
  (*number)++;
}


unsigned int multiply(unsigned int x, unsigned int y)
{
    if (x == 1)
    {
        /* Terminating case */
        return y;
    }
    else if (x > 1)
    {
        /* Recursive step */
        return y + multiply(x-1, y);
    }

    /* Catch scenario when x is zero */
    return 0;
}


//Structures

struct Person
{
	char name[50];
    int age;
    float salary;
};

struct Point
{
    int x;
    int y;
};

//Functions for structures (with pointers)
void movePoint(Point* p){
	(*p).x++;
	(*p).y++;
}



int main() {
  cout << "Hello, World!" << std::endl;

  ofstream log_file("LogFile.txt");

  //User define types
  typedef float house;
  house my_house = 7.;
  log_file << "My house is that big: " << my_house << endl;

  //Enumerate
  enum colors{yellow, blue, red, orange, pink} specific_color;
  specific_color = red;

  log_file << "The desired color corresponds to " << specific_color << " on the list" << endl;


//  //Sum
//  int a = 3;
//  float b = 4.5;
//  double c = 5.25;
//  double sum;
//
//  sum = a+b+c;
//
//  log_file << "The sum of a, b, and c is " << sum << endl;
//
//
//  //Pointers (operator new and delete)
//  int n=1;
//  void* p1;
//  int* p2;
//  p1 = &n;
//  p2 = (int*)p1;
//  *p2 +=1;
//
//  log_file << "p1 direction: " << p1 << endl;
//  log_file << "p2 value: " << *p2 << endl;
//
//  p2 = &a;
//  log_file << "p2 value: " << *p2 << endl;
//
//  //Printing variables in a different way
//  printf("The sum is %.2f \n", sum);
//
//  //Arrays
//  int my_array[2];
//  my_array[0]=1;
//  my_array[1]=2;
//
//  //Multidimensional arrays
//  //int array[2][2] = {1,2,3,4};
//  int array[2][2] = {{1,2},{3,4}};
//  log_file << "Element 1,0: " << array[1][0] << endl;
//
//  //Strings without strings XD
//  char *name = "Mary";
//  log_file << "First letter of Mary: " <<  name[0] << endl;
//  log_file << "Second letter of Mary: " <<  name[1] << endl;
//  log_file << "Fifth letter of Mary: " <<  name[4] << endl;
//  char name2[] = "Peter";
//  char name3[20] = "Leyre";
//  char * name4 = "Peter";
//  char name5[8]=" Nogues";
//
//  printf("%s, %s and %s have been friends for %d years \n", name, name2, name3, a);
//  printf("%s has %d letters \n", name3, strlen(name3));
//  if(strncmp(name2,name4,5)==0){
//	  log_file << "Both names are the same" << endl;
//  }
//  else log_file << "Names are not the same" << endl;
//
//  strncat(name3, name5, 7);
//  printf("The joined string is %s \n", name3);
//
//  char namefull[20];
//  sprintf(namefull, "%s %s", name3, name5);
//  printf("The name variable is: %s \n", namefull);
//
//  //Loops
//  int array2[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};
//  int i = 0;
//
//  while (i < 10) {
//	  if(array2[i]<5){
//		  i++;
//		  continue;
//	  }
//	  else if(array2[i]>10) break;
//	  printf("%d\n", array2[i]);
//	  i++;
//  }
//
//
//  //Call external functions
//  log_file << "2x2 is: " << multiplybytwo(2) << endl;
//  log_file << "10x2 is: " << multiplybytwo(10) << endl;
//
//  freeBirds();
//
//  printf("%d ", runner());
//  printf("%d ", runner());
//  printf("%d  \n", runner());
//
//	Person p11;
//	Person p21;
//
//	log_file << "Enter Full name: ";
//	cin.get(p11.name, 50);
//	log_file << "Enter age: ";
//	cin >> p11.age;
//	log_file << "Enter salary: ";
//	cin >> p11.salary;
//
//	p21.age=25;
//
//
//
//	log_file << "\nDisplaying Information." << endl;
//	log_file << "Name: " << p11.name << endl;
//	log_file <<"Age: " << p11.age << endl;
//	log_file << "Salary: " << p11.salary << endl;
//	log_file <<"Age2: " << p21.age << endl;
//
//	//Function arguments by reference
//	int mynumber = 0;
//	printf("Value of n before: %d \n", mynumber);
//	addOne(&mynumber);
//	printf("Value of n after iter1: %d \n", mynumber);
//	addOne(&mynumber);
//	printf("Value of n after iter2: %d \n", mynumber);
//	addOne(&mynumber);
//	printf("Value of n after iter3: %d \n", mynumber);
//
//
//	//Functions over stuctures using pointers
//	Point newpoint;
//	newpoint.x = 4;
//	newpoint.y = 8;
//	log_file << "X before: " << newpoint.x << endl;
//	log_file << "Y before: " << newpoint.y << endl;
//	movePoint(&newpoint);
//	log_file << "X after: " << newpoint.x << endl;
//	log_file << "Y after: " << newpoint.y << endl;
//
//	//Dyamic allocation memory and release
//	int i,n;
//	char *buffer;
//
//	printf("How long do you want the string? ");
//	cin>>i;
//
//	buffer = (char*)malloc(i+1);
//	if (buffer==NULL) exit (1);
//
//	for (n=0; n<i; n++){
//	    buffer[n]=rand()%26+'a';
//	    buffer[i]='\0';
//	}
//
//	printf ("Random string: %s\n",buffer);
//	free (buffer);
//
//	//Array and pointers
//	char letters[] = {'C', 'A', 'R', 'L', 'O', 'S'};
//	char* point_lett = &letters[0];
//
//	log_file << "Adreses / Values: " << endl;
//	for(int i=0; i< 6; i++){
//		log_file << point_lett + i << "/" << *(point_lett+i) << endl;
//	}
//
//	//Allocate and free memory for a 2D array with pointers
//    int i, j;
//    /* TODO: define the 2D pointer variable here */
//    int **pnumbers;
//
//    /* TODO: Complete the following line to allocate memory for holding three rows */
//    pnumbers = (int **) malloc(3  *sizeof(int *));
//
//    /* TODO: Allocate memory for storing the individual elements in a row */
//    pnumbers[0] = (int *) malloc(1 * sizeof(int));
//    pnumbers[1] = (int *) malloc(2 * sizeof(int));
//    pnumbers[2] = (int *) malloc(3 * sizeof(int));
//
//    pnumbers[0][0] = 1;
//    pnumbers[1][0] = 1;
//    pnumbers[1][1] = 1;
//    pnumbers[2][0] = 1;
//    pnumbers[2][1] = 2;
//    pnumbers[2][2] = 1;
//
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j <= i; j++) {
//            printf("%d", pnumbers[i][j]);
//        }
//        printf("\n");
//    }
//
//    for (i = 0; i < 3; i++) {
//        free(pnumbers[i]);
//    }
//
//    free(pnumbers);
//
//    //Recursive functions
//    printf("3 times 5 is %d \n", multiply(3, 5));
//    printf("2 times 4 is %d \n", multiply(2, 4));


  return 0;
}


