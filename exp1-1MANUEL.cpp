#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	double Premium = 500;
	double Side = 200;
	double Box = 250;
	double Gen = 100;

	cout << "Number of Tickets sold - Premium " << endl;
	cin >> Premium;
	cout << "Number of Premium tickets"  << "         " << "P" << 500*Premium << endl;
	cout << " " << fixed << setprecision(2) << endl;

	cout << "Number of Tickets sold4 - Sideline " << endl;
	cin >> Side;
	cout << "Number of Side tickets"  << "         "<< "P"  << 200*Side << endl;
	cout << " " << fixed << setprecision(2) << endl;

	cout << "Number of Tickets sold  - Box " << endl;
	cin >> Box;
	cout << "Number of Box tickets"  << "         "<< "P"  << 250*Box<< endl;
	cout << " " << fixed << setprecision(2) << endl;

	cout << "Number of Tickets sold - General Admission " << endl;
	cin >> Gen;
	cout << "Number of General Admission tickets"  << "         "<< "P"  << 100*Gen << endl;
	cout << " " << fixed << setprecision(2) << endl;

	cout << "Total number of Tickets Sold" << "         " << Premium+Side+Box+Gen << endl;
	cout << "Total Sales" <<  "         " << "P" << Premium*500+Side*200+Box*250+100*Gen << fixed << setprecision(2) << endl;

	getch();
	return 0;
}
