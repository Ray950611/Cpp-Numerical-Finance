/*
 * FDMethod.h
 *
 *  Created on: 2020Äê2ÔÂ22ÈÕ
 *      Author: DR
 */

#ifndef FDMETHOD_H_
#define FDMETHOD_H_

#include <vector>
#include "ParabPDE.h"
using namespace std;
typedef vector<double> Vector;
class FDMethod
{
	public:
		ParabPDE* PtrPDE;
		int imax,jmax;
		double dx,dt;
		vector<Vector> V;
		FDMethod(ParabPDE* PtrPDE_,int imax_, int jmax_);
		double t(double i){return dt*i;}
		double x(int j){return PtrPDE->x1+dx*j;}
		double a(double i,int j){return PtrPDE->a(t(i),x(j));}
		double b(double i,int j){return PtrPDE->b(t(i),x(j));}
		double c(double i,int j){return PtrPDE->c(t(i),x(j));}
		double d(double i,int j){return PtrPDE->d(t(i),x(j));}
		double f(int j){return PtrPDE->f(x(j));}
		double fu(int i){return PtrPDE->fu(t(i));}
		double f1(int i){return PtrPDE->f1(t(i));}
		double v(double t,double x);
};

#endif /* FDMETHOD_H_ */
