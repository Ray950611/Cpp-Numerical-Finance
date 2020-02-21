/*
 * DoubDigitOpt.h
 *
 *  Created on: 2020Äê2ÔÂ17ÈÕ
 *      Author: DR
 */

#ifndef DOUBDIGITOPT_H_
#define DOUBDIGITOPT_H_
#include "Options.h"
class DoubDigitOpt: public EurOption
{
	private:
		double K1;
		double K2;
	public:
		int GetInputData();
		double Payoff(double z);
};




#endif /* DOUBDIGITOPT_H_ */
