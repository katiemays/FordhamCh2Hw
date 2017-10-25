// Katie Mays
// Sept. 21, 2017
// Demo: nested if than else, months trial

#include <iostream>
using namespace std;

int main ()
{
	// variables
	int month;

	// input
	cout << "Enter the month's number (1 - 12): ";
	cin  >> month;

	// processing and output
	if (month == 1)
		cout << "January"   << endl;
	else if (month == 2)
		cout << "February"  << endl;
	else if (month == 3)
		cout << "March"     << endl;
	else if (month == 4)
		cout << "April"     << endl;
	else if (month == 5)
		cout << "May"       << endl;
	else if (month == 6)
		cout << "June"      << endl;
	else if (month == 7)
		cout << "July"      << endl;
	else if (month == 8)
		cout << "August"    << endl;
	else if (month == 9)
		cout << "September" << endl;
	else if (month == 10)
		cout << "October"   << endl;
	else if (month == 11)
		cout << "November"  << endl;
	else if (month == 12)
		cout << "December"  << endl;
	else 
		cout << "Sorry, you have entered an invalid value." << endl;

	cout << "Have a nice day." << endl;



	return 0;
}
