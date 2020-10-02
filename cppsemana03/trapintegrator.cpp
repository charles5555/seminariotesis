#include <cstdlib>
#include <iostream>
using std::cout;
using std::endl;
using std::cerr;
#include "trapintegrator.h"

TrapezoidalIntegrator::TrapezoidalIntegrator(){
	a=b=0.0e0;
	n=0;
}
TrapezoidalIntegrator::TrapezoidalIntegrator(double usra, double usrb, int usrn):
	TrapezoidalIntegrator(){
		a=usra; b=usrb; n=usrn;
}
double TrapezoidalIntegrator::Compute(){
	cout << "Under construction" <<endl;
	double h = (b - a)/(n - 1);
	double f = new array[n] ;
	double integral = 0.0e0;
	for (int i=0; i<n; ++i){
		f[i]=0;
	}
	for (int i=1; i<n; ++i){
		f[i]= TrapezoidalIntegrator::Function(a + i*((b - a)/n));
		
	}
	integral = (h/2)*(f[1]+f[n]);
	for (int i=2; i<n-1; ++i){
		integral+= h*f[i];
	}	
	return integral;
}

double TrapezoidalIntegrator::Function(double x){
return (x);
}
