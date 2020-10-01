#include <cstdlib>
#include <iostream>
using std::cout;
using std::endl;
using std::cerr;
#include "trapintegrator.h"

int main (int argc, char *argv[]){
	cout << "Welcome to the Trapezoidal integrator program" << endl;
	cout << "This program is going to calculate the integral of a specific function in a definite range" << endl;
	TrapezoidalIntegrator ti(-2,2,100);
	cout << "The integral for function f(x)=x is: " << ti.Compute() << '\n';
	return EXIT_SUCCESS;
}
