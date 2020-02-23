/*
 * ExplicitMethod.h
 *
 *  Created on: 2020Äê2ÔÂ23ÈÕ
 *      Author: DR
 */

#ifndef EXPLICITMETHOD_H_
#define EXPLICITMETHOD_H_

#include "FDMethod.h"
class ExplicitMethod: public FDMethod
{
	public:
		ExplicitMethod(ParabPDE* PtrPDE_,int imax_, int jmax_):FDMethod(PtrPDE_,imax_,jmax_){}
		double A(int i, int j){return 1.0-dt*(b(i,j)/2.0-a(i,j)/dx)/dx;}
		double B(int i,int j){return 1.0-dt*c(i,j)+2.0*dt*a(i,j)/(dx*dx);}
		double C(int i, int j){return -dt*(b(i,j)/2.0+a(i,j)/dx)/dx;}
		double D(int i, int j){return -dt*d(i,j);}
		void SolvePDE();
};


#endif /* EXPLICITMETHOD_H_ */
