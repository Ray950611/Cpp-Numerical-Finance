/*
 * Option.cpp
 *
 *  Created on: 2020Äê2ÔÂ22ÈÕ
 *      Author: DR
 */

#include "Option.h"
#include <cmath>
double Put::Payoff(double z)
{
	if (K<z) return 0.0;
	return K-z;
}
double Put::UpperBdCond(BSModel* PtrModel,double t)
{
	return 0.0;
}

double Put::LowerBdCond(BSModel* PtrModel, double t)
{
	return K*exp(-PtrModel->r*(T-t));
}


