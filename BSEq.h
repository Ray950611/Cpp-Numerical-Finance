/*
 * BSEq.h
 *
 *  Created on: 2020Äê2ÔÂ22ÈÕ
 *      Author: DR
 */

#ifndef BSEQ_H_
#define BSEQ_H_
#include "ParabPDE.h"
#include "BSModel.h"
#include "Option.h"
class BSEq:public ParabPDE
{
	public:
		BSModel* PtrModel;
		Option* PtrOption;
		BSEq(BSModel* PtrModel_,Option* PtrOption_);
		double a(double t, double z);
		double b(double t, double z);
		double c(double t, double z);
		double d(double t, double z);
		double f(double z);
		double f1(double t);
		double fu(double t);
};




#endif /* BSEQ_H_ */
