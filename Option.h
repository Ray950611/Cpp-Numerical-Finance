/*
 * Option.h
 *
 *  Created on: 2020Äê2ÔÂ22ÈÕ
 *      Author: DR
 */

#ifndef OPTION_H_
#define OPTION_H_
#include "BSModel.h"
class Option
{
	public:
		double T,z1,zu;
		virtual double Payoff(double z)=0;
		virtual double UpperBdCond(BSModel* PtrModel, double t) = 0;
		virtual double LowerBdCond(BSModel* PtrModel, double t) = 0;
};
class Put:public Option
{
	public:
		double K;
		Put(double K_,double T_, double z1_,double zu_)
		{
			K=K_;
			T=T_;z1=z1_;zu=zu_;
		}
		double Payoff(double z);
		double UpperBdCond(BSModel* PtrModel, double t);
		double LowerBdCond(BSModel* PtrModel, double t);
};



#endif /* OPTION_H_ */
