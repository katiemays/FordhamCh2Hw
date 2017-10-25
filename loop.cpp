// Katie Mays
// Sept. 21, 2017
// Demo: while loop

#include <iostream>
using namespace std;

int main ()
{
	// variables
	int countDown;
	
	// input
	cout << "Enter the number for count down: ";
	cin  >> countDown;

	// processing
	while (countDown > 0)
	{
		cout << "Hello Bronx!" << endl;
		countDown = countDown - 1;
	}

	cout << "Have a nice day." << endl;

	return 0;
}
