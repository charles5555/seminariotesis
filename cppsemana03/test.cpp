#include <cstdlib>
#include <iostream>
using std::cout;
using std::endl;
using std::cerr;
#include "trapintegrator.h"

int main (int argc, char *argv[]){
	cout << "Welcome to the Trapezoidal integrator program" << endl;
	cout << "This program is going to calculate the integral of a specific function in a definite range" << endl;
	cout << "Write HELP in the terminal if you need some help for the program, START to begin to use the program or EXIT to clse the program " << endl;
    cin << string ayuda << endl;
	while (ayuda != "HELP" || ayuda  != "START" || ayuda!= "EXIT"){
			cout << "The comand is not correct, write the comand again" <<endl;
			cin << ayuda << endl;
	}
	if (ayuda == "HELP"){
			cout << "This program calculates the integral of the any function through the trapezoidal method" << endl;
			cout << "This program needs 3 arguments, the lower and upper limits in the integral and the number of segments which the range will be divided" << endl;
			cout << "The syntaxis is (a,b,n), where a is the a is the lower limit, b is the upper limit and n is the number of segments."
			cout << "If you don't put any arguments, the program set the values (0,0,0)" << endl; 		
	}
	else if (ayuda == "START"){
	TrapezoidalIntegrator ti(-2,2,100);
	cout << "The integral for function f(x)=x is: " << ti.Compute() << '\n';

	}
	else if (ayuda == "EXIT"){
		break
	}

	return EXIT_SUCCESS;
}
