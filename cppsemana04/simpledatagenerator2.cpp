#include <cstdlib>
#include <iostream>
#include <cmath>

class MyDataGenerator : public SimpleDataGenerator {
public:
	MyDataGenerator(double min, double max, int np)
	  :  SimpleDataGenerator(min, max, np) {}
	double f(double x) {return (sin(x)/x); }
};
