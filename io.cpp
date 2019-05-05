/*
 * io.cpp
 *
 *  Created on: May 2, 2019
 *      Author: lnogues
 */

#include <iostream>
#include "io.h"

using namespace std;

namespace Constants
{
    // actual global variables
    extern const double pi=3.14159;
    extern const double avogadro=6.0221413e23;
    extern const double my_gravity=9.2; // m/s^2 -- gravity is light on this planet
}

double Io::readNumber(){
	double num1;
	cout << "Introduce a number: " << endl;
	cin >> num1;
	return num1;
}

char Io::getOperator(){
	cout << "Enter one of the following: +, -, *, or /" << endl;
	char ope;
	cin >> ope;
	return ope;
}

void Io::writeAnswer(double number){
	cout << "The answer is: " << number << endl;
}

