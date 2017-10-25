// Katie Mays
// September 18, 2017
// Demo: if then and else true false

#include <iostream>
using namespace std;

int main ()

{

	// variables
	int hours;
	double grossPay, rate;

	// input
	cout << "How many hours did you work this week: ";
	cin  >> hours;
	cout << "        What is your hourly pay rate : ";
	cin  >> rate;

	// processing
	if (hours <= 40)
	{
		grossPay = hours * rate;
	}
	else
	{

	}

	//output
	cout << "grossPay is " << grossPay << endl;

	return 0;
}
