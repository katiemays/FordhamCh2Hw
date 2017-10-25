// Katie Mays
// Sept. 28, 2017
// Demo: conditional statements

#include <iostream>
using namespace std;

int main ()
{
	// variables
	double weight, cost;

	// input
	cout << "Enter the weight of your package: ";
	cin  >> weight;

	// processing - decision
	if (weight > 0 && weight <= 1)
		cost = 2.00; 
	else if (weight > 1 && weight <= 5)
		cost = 10.00;
	else if (weight > 5 && weight <= 10)
		cost = 15.00;
	else if (weight > 10 && weight <= 20)
		cost = 20.00;
	else 
	{
		cout << "Sorry, we cannot ship this package!" << endl;
		return 0;
	}

	// output
	cout << "Your shipping cost will be " << cost << " dollars." << endl;

	return 0;
}
