//============================================================================
// Name        : Binomial.cpp
// Author      : Rui Ding
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
#include "BinModel.h"
#include "Options.h"
#include "DoubDigitOpt.h"
#include "BinLattice.h"
using namespace std;

int main() {
	BinModel Model;

	if(Model.GetInputData()==1) return 1;
	cout<<"Enter call option data:"<<endl;
	Call Option1;
	Option1.GetInputData();
	BinLattice<double> PriceTree1;
	BinLattice<bool> StoppingTree1;
	cout<<"European call option price = "<<Option1.PriceByCRR(Model)<<endl<<endl;
	Option1.PriceBySnell(Model,PriceTree1,StoppingTree1);
	cout<<"American call option price = "<<endl<<endl;
	PriceTree1.Display();
	cout<<"American call exercise police: "<<endl<<endl;
	StoppingTree1.Display();

	cout<<"Enter put option data:"<<endl;
	Put Option2;
	BinLattice<double> PriceTree2;
	BinLattice<bool> StoppingTree2;
	Option2.GetInputData();
	cout<<"European put option price = "<<Option2.PriceByCRR(Model)<<endl<<endl;
	Option2.PriceBySnell(Model,PriceTree2,StoppingTree2);
	cout<<"American put option price = "<<endl<<endl;
	PriceTree2.Display();
	cout<<"American put exercise police: "<<endl<<endl;
	StoppingTree2.Display();

	DoubDigitOpt Option3;
	Option3.GetInputData();
	cout<<"European double-digit option price = "<<Option3.PriceByCRR(Model)<<endl<<endl;

	return 0;
}
