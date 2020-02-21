/*
 * PathDepOptoin.h
 *
 *  Created on: 2020Äê2ÔÂ20ÈÕ
 *      Author: DR
 */

#ifndef PATHDEPOPTOIN_H_
#define PATHDEPOPTOIN_H_

#include "BSModel.h"
class PathDepOption
{
	public:
		double T,Price,PricingError,delta;
		int m;
		double PriceByMC(BSModel Model, long N, double epsilon);
		virtual double Payoff(SamplePath& S)=0;
};
class ArthmAsianCall: public PathDepOption
{
	public:
		double K;
		ArthmAsianCall(double T_, double K_, int m_)
		{
			T = T_;K = K_,m = m_;
		}
		double Payoff(SamplePath& S);
};



#endif /* PATHDEPOPTOIN_H_ */
