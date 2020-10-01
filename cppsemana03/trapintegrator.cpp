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
	h = (usrb - usra)/(usrn - 1);
	f = new double[usrn] ;
	integral = 0;
	for (int i=0; i<usrn; ++i){
		f[i]=0;
}
	for (int i=1; i<usrn; ++i){
		f[i]= TrapezoidalIntegrator::Function(usra + i*((usrb - usra)/usrn));
		
}
	integral = (h/2)*(f[1]+f[usrn]);
	for (int i=2; i<usrn-1; ++i){
		integral+= h f[i];
}
	return integral;
}

double TrapezoidalIntegrator::Function(double x){
return (x);
}
