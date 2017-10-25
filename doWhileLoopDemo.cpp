// Katie Mays
// Sept. 25, 2017
// Demo: do-while-loop

#include <iostream>
using namespace std;

int main()
{
	// variables
	double length, width, area;
	char rerun;

	do
	{
		// input
		cout << "Enter the length: ";
		cin  >> length;
		
		cout << "Enter the width: ";
		cin  >> width;

		// processing
		area = length * width;

		// output
		cout << "The area that you need is " << area << " square feet" << endl;

		cout << "Would you like to run another calculation? Y = yes, N = no ";
		cin  >> rerun;

	} while (rerun == 'Y' || rerun == 'y');

	cout << "Have a nice day!" << endl;


	return 0;
}
