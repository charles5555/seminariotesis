#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;

int main ()
{
	double xmax, xmin;
	cout << "Enter the max and the min of the interval: "<< endl;
	cin >> xmax >> xmin;
	char name[]= "datos.dat"; 
	ofstream ofile(name, ios::out);
	int i;
	cout << "Ingrese el número de puntos a graficar: " << endl;
	cin >> i;
	double xi=xmin, deltax=(xmax-xmin)/ double (i-1);
	for (int n=0 ; n<i ; ++n) {
 		ofile << (xi) << " " << xi*exp(xi*sin(xi)) << endl;
		xi+=deltax;
	}
	ofile.close();
	return EXIT_SUCCESS;
}
