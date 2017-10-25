// Katie Mays
// September 21, 2017
// HW #2: room capacity if then conditional 

#include <iostream>
using namespace std;

int main()

{
	// variables
	int number, max;

	// input
	cout << "Please enter the number of people: " << endl;
	cin  >> number;

	// processing and output
	max = 100;

	if (number <= max)
	{
		cout << "It is legal to hold the meeting. An additional " << max - number << " people may legally attend." << endl;
	} 
	else
	{
		cout << "The meeting cannot be held as planned due to fire regulations. " << number-max << " people must be excluded in order to meet the regulation." << endl;
	}

	return 0;
}
