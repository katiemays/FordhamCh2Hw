// Katie Mays
// Sept. 14, 2017
// program that displays table using calculator mode

#include <iostream>
using namespace std;

int main()
{
	// VARIABLES
	int a1, a2, a3, a4, a5, a6, a7;

	// INPUT
	a1 = 1;
	a2 = 2;
	a3 = 3;
	a4 = 4;
	a5 = 5;
	a6 = 6;
	a7 = 7;

	// OUTPUT
	cout << "a	a^2	a^3" << endl;
	cout << a1 << "\t" << a1*a1 << "\t" << a1*a1*a1 << endl;	
	cout << a2 << "\t" << a2*a2 << "\t" << a2*a2*a2 << endl;	
	cout << a3 << "\t" << a3*a3 << "\t" << a3*a3*a3 << endl;	
	cout << a4 << "\t" << a4*a4 << "\t" << a4*a4*a4 << endl;	
	cout << a5 << "\t" << a5*a5 << "\t" << a5*a5*a5 << endl;	
	cout << a6 << "\t" << a6*a6 << "\t" << a6*a6*a6 << endl;	
	cout << a7 << "\t" << a7*a7 << "\t" << a7*a7*a7 << endl;	

	return 0;
}
