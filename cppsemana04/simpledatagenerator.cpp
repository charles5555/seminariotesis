#include <cstdlib>
#include <iostream>
#include <fstream>
using std::ofstream;
#include "simpledatagenerator.h"
SimpleDataGenerator::SimpleDataGenerator(double min, double max, int np) {
	double minvalue=min;
	double maxvalue=max;
	int n=np;
	double h=(maxvalue-minvalue)/double(n-1);
}
void SimpleDataGenerator::ComputeAndSave(string oname) {
	ofstream ofil(oname.c_str());
	std::cout << "el valor minimo es: " << minvalue << '\n';
	double x=minvalue;
	for (int i=0; i<n; ++i) {
		ofil << x << " " << f(x) << '\n';
		x+=h;
	}
	ofil.close();
}

