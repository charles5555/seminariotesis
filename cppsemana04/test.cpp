#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include "simpledatagenerator.h"


class MyDataGenerator : public SimpleDataGenerator {
public: 
	MyDataGenerator(double min, double max, int np) : SimpleDataGenerator(min, max, np) {}
	double f(double x) {return (sin(x)/x);}
};
int main (int argc, char *argv[]) {
	if (argc<4) {
		std::cout << "not enough arguments!\n";
		return EXIT_FAILURE;
	}
	double minvalue=std::stod(string(argv[1]));
	double maxvalue=std::stod(string(argv[2]));
	int n=std::stod(string(argv[3]));
	std::cout << "minvalue: " << minvalue << '\n';
	std::cout << "maxvalue: " << maxvalue << '\n';
	std::cout << "n: " << n << '\n';
	SimpleDataGenerator lineal(minvalue, maxvalue,n);
	lineal.ComputeAndSave(string("database.dat"));
	MyDataGenerator sin(minvalue, maxvalue, n);
	sin.ComputeAndSave(string("datainh.dat"));
	return EXIT_SUCCESS;
}
