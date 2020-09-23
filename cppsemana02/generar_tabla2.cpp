#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cmath>
#include <string>
using namespace std;

int main (int argc, char *argv[])
{
	if (argc=3) {
		double xmin=stod(string(argv[1]));
		double xmax=stod(string(argv[2]));
		int i=stod(string(argv[3]));
		cout << "xmin: " << xmin << endl;
		cout << "xmax: " << xmax << endl;
		cout << "i: " << i << endl;
		char name[]= "datos2.dat"; 
		ofstream ofile(name, ios::out);
		double xi=xmin, deltax=(xmax-xmin)/ double (i-1);
		for (int n=0 ; n<i ; ++n) {
 			ofile << (xi) << " " << xi*exp(sin(xi)) << endl;
			xi+=deltax;
		}
		ofile.close();
		return EXIT_SUCCESS;
		}
	cout << "Not anough arguments!" << endl;
	return EXIT_FAILURE;
}
