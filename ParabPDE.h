/*
 * ParabPDE.h
 *
 *  Created on: 2020Äê2ÔÂ22ÈÕ
 *      Author: DR
 */

#ifndef PARABPDE_H_
#define PARABPDE_H_
class ParabPDE
{
	public:
		double T,x1,xu;
		virtual double a(double t, double x)=0;
		virtual double b(double t, double x)=0;
		virtual double c(double t, double x)=0;
		virtual double d(double t, double x)=0;
		virtual double f(double x)=0;
		virtual double fu(double t)=0;
	    virtual double f1(double t)=0;
};




#endif /* PARABPDE_H_ */
