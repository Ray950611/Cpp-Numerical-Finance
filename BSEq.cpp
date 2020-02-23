/*
 * BSEq.cpp
 *
 *  Created on: 2020Äê2ÔÂ22ÈÕ
 *      Author: DR
 */

#include "BSEq.h"
#include <cmath>
BSEq::BSEq(BSModel* PtrModel_, Option* PtrOption_)
{
	PtrModel = PtrModel_;PtrOption=PtrOption_;
	T = PtrOption->T;
	x1 = PtrOption->z1;
	xu = PtrOption->zu;

}
double BSEq::a(double t, double z)
{
	return -0.5*pow(PtrModel->sigma*z,2.0);
}
double BSEq::b(double t, double z)
{
	return -PtrModel->r*z;
}
double BSEq::c(double t, double z)
{
	return PtrModel->r;
}
double BSEq::d(double t, double z)
{
	return 0.0;

}
double BSEq::f(double z)
{
	return PtrOption->Payoff(z);
}
double BSEq::f1(double t)
{
	return PtrOption->LowerBdCond(PtrModel,t);
}
double BSEq::fu(double t)
{
	return PtrOption->UpperBdCond(PtrModel,t);
}
