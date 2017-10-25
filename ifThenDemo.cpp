// Katie Mays
// September 18, 2017
// Demo: true false conditional statements

#include <iostream>
using namespace std;

int main()

{
	// variables
	int number;

	// input
	cout << "Enter an integer : ";
	cin  >> number;
	
	// processing and output
	if (number % 5 == 0)
		cout << "High-five!" << endl;
	
	if (number % 2 == 0)
		cout << "Hi even." << endl;

	return 0;
}
