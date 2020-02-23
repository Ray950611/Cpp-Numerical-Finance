//============================================================================
// Name        : FiniteDifference.cpp
// Author      : Rui Ding
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "BSModel.h"
#include "Option.h"
#include "BSEq.h"
#include "ExplicitMethod.h"
using namespace std;

int main() {
	double S0=100.0,r=0.05,sigma=0.2;
	BSModel Model(S0,r,sigma);
	double K=100.0,T=1.0/12.0,z1 = 0.0,zu = 2.0*S0;
	Put EuropeanPut(K,T,z1,zu);
	BSEq BSPDE(&Model, &EuropeanPut);
	int imax=3000,jmax=1000;
	ExplicitMethod Method(&BSPDE,imax,jmax);
	Method.SolvePDE();
	cout<<"Price: "<<Method.v(0.0,S0)<<endl;
	return 0;
}
