/*
 * BinModel.h
 *
 *  Created on: 2020��2��15��
 *      Author: DR
 */

#ifndef BINMODEL_H_
#define BINMODEL_H_
class BinModel
{
	private:
		double S0;
		double U;
		double D;
		double R;
	public:

		double RiskNeutProb();
		double S(int n, int i);
		int GetInputData();
		double GetR();
};



#endif /* BINMODEL_H_ */
