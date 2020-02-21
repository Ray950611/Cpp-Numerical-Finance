//============================================================================
// Name        : cpp.cpp
// Author      : Rui Ding
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Solver.h"
#include "EurCall.h"
using namespace std;
class F1
{
	public:
		double Value(double x){return x*x-2;}
		double Deriv(double x){return 2*x;}

} MyF1;
class F2
{
	private:
		double a;
	public:
		F2(double a_){a=a_;}
		double Value(double x){return x*x-a;}
		double Deriv(double x){return 2*x;}

} MyF2(3.0);
class Intermediary: public EurCall
{
	private:
		double S0,r;
	public:
		Intermediary(double S0_, double r_, double T_, double K_):EurCall(T_,K_){S0=S0_;r=r_;}
		double Value(double sigma)
		{
			return PriceByBSFormula(S0,sigma,r);
		}
		double Deriv(double sigma)
		{
			return VegaByBSFormula(S0,sigma,r);
		}
};
int main()
{
	double S0=100.0;
	double r=0.1;
	double T = 1.0;
	double K=100.0;
	Intermediary Call(S0,r,T,K);
	double Acc=0.001;
	double LEnd=0.01,REnd = 1.0;
	double Tgt=12.56;
	cout<<"Implied Volatility by bisect: "<<SolveByBisect(&Call,Tgt,LEnd,REnd,Acc)<<endl;

	double Guess=0.23;
	cout<<"Implied Volatility by Newton-Raphson: "<<SolveByNR(&Call,Tgt,Guess,Acc)<<endl;


	return 0;
}
