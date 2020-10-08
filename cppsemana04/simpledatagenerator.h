#ifndef _SIMPLEDATAGENERATOR_H_
#define _SIMPLEDATAGENERATOR_H_
#include <string>
using std::string;
class SimpleDataGenerator {
public:
	virtual double f(double x) {return x*x;}
	SimpleDataGenerator(){};
	SimpleDataGenerator(double min, double max, int np);
	void ComputeAndSave(string oname);
protected:
	int n;
	double minvalue, maxvalue;
	double h;
};
#endif 
