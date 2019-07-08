#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	double mass, density;
	cout << "input mass:" <<endl;
	cin >> mass;
	cout << "mass = " << mass << "g" <<endl;
	cout << "input density: " <<endl;
	cin>> density;
	cout << "density =" << density << "g/cm^3" <<endl;
	cout << "volume of the object = " << setprecision(2) << fixed<< mass/(4*density) << "cm^3" <<endl;
	getch();
	return 0;
}
