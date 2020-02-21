/*
 * BSModel.h
 *
 *  Created on: 2020Äê2ÔÂ20ÈÕ
 *      Author: DR
 */

#ifndef BSMODEL_H_
#define BSMODEL_H_
using namespace std;
#include<vector>
#include <ctime>
#include <cmath>
typedef vector<double> SamplePath;

class BSModel
{
	public:
		double S0,r,sigma;
		BSModel(double S0_,double r_, double sigma_)
		{
			S0=S0_;r=r_;sigma = sigma_;srand(time(NULL));
		}
		void GenerateSamplePath(double T,int m, SamplePath& S);
};




#endif /* BSMODEL_H_ */
