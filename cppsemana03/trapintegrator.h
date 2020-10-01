#ifndef _TRAPINTEGRATOR_H_
#define _TRAPINTEGRATOR_H_
class TrapezoidalIntegrator {
public:
	TrapezoidalIntegrator();
	TrapezoidalIntegrator(double, double, int);
	double Compute();
	double Function(double);
protected:
	double a,b;
	int n;
};

#endif /* _TRAPINTEGRATOR_h_ */
