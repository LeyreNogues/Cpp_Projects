/*
 * main.cpp
 *
 *  Created on: May 2, 2019
 *      Author: lnogues
 */

#include <iostream>
#include "io.h"
#include <stdlib.h>
#include <stdio.h>
#include <array>
#include <vector>

using namespace std;

//int readNumber(){
//	int num1;
//	cout << "Introduce a number: " << endl;
//	cin >> num1;
//	return num1;
//}
//
//void writeAnswer(int number){
//	cout << "The answer is: " << number << endl;
//}


//Forward declaration (when you do not have a header)

int main(){

//	Io io_object;
//	cout << "This code operates two numbers" << endl;
//	double number1 = io_object.readNumber();
//	cout << "Number 1: " << number1 <<  endl;
//	double number2 = io_object.readNumber();
//	cout << "Number 2: " << number2 << endl;
//	char oper = io_object.getOperator();
//	cout << "Operator: " <<  oper << endl;


	double result;
//	if(oper=='+'){
//		result = number1+number2;
//		cout << "addition" << endl;
//	}
//	else if(oper=='-') result = number1-number2;
//	else if(oper=='*') result = number1*number2;
//	else if(oper=='/') result = number1/number2;
//	else{
//		cout << "Not a valid operation";
//		return 0;
//	}


//	switch(oper){
//	case '+':
//		result = number1+number2;
//		break;
//	case '-':
//		result = number1-number2;
//		break;
//	case '*':
//		result = number1*number2;
//		break;
//	case '/':
//		result = number1/number2;
//		break;
//	default:
//		cout << "Not a valid operation"; return 0;
//	}
//
//
//	cout << "Result from " << number1 << " " << oper << " " << number2 << " is " << result << endl;
//	io_object.writeAnswer(result);
//
//	cout << "Pi constat is: " << Constants::pi << endl;

	//Strings
//	std::string name;
//	std::string surname;
//
//	cout << "Give me your Name" << endl;
//	std::getline(std::cin, name);
//	cout << "Give me your Surname" << endl;
//	std::getline(std::cin, surname);
//
//	string totalname = name + " " + surname;
//	cout << "Your name is: " << totalname << endl;
//	cout << " Your surname is " << surname.length() << " letters long" << endl;

	//arrays and vectors
	array<int, 5> myArray { 7, 3, 1, 9, 5 };
	    for(std::size_t i=0; i < myArray.size(); ++i) std::cout << myArray[i] << ' ';


	return 0;
}


