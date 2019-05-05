/*
 * io.h
 *
 *  Created on: May 2, 2019
 *      Author: lnogues
 */

#ifndef IO_H_
#define IO_H_

namespace Constants{
	// forward declarations only
	extern const double pi;
	extern const double avogadro;
	extern const double my_gravity;
}

class Io{

public:
	double readNumber();
	char getOperator();
	void writeAnswer(double number);

};

#endif /* IO_H_ */
