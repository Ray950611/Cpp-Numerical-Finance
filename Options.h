/*
 * Options.h
 *
 *  Created on: 2020Äê2ÔÂ15ÈÕ
 *      Author: DR
 */

#ifndef OPTIONS_H_
#define OPTIONS_H_
#include "BinModel.h"
#include "BinLattice.h"
class Option
{
	private:
		int N;
	public:
		void SetN(int N_){N=N_;}
		int GetN(){return N;}
		virtual double Payoff(double z){return 0.0;};
};

class EurOption: public virtual Option
{
	public:
		double PriceByCRR(BinModel Model);
};
class AmOption: public virtual Option
{
	public:
		double PriceBySnell(BinModel Model,BinLattice<double>& PriceTree,BinLattice<bool>& StoppingTree);

};
class Call: public EurOption, public AmOption
{
	private:
		double K;
	public:
		double Payoff(double z);
		void SetK(double K_){K=K_;}
		int GetInputData();
};

class Put: public EurOption, public AmOption
{
	private:
		double K;
	public:
		double Payoff(double z);
		void SetK(double K_){K=K_;}
		int GetInputData();
};




#endif /* OPTIONS_H_ */
