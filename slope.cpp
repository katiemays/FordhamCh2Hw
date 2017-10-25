// Katie Mays
// Sept. 21, 2017
// Lab #2: calculating slope of a line

#include <iostream>
using namespace std;

int main ()
{
	// variables
	double x1, y1;
	double x2, y2;
	double slope;

	// input
	cout << " Enter the first point's x value: ";
	cin  >> x1;

	cout << " Enter the first point's y value: ";
	cin  >> y1;

	cout << "Enter the second point's x value: ";
	cin  >> x2;
	
	cout << "Enter the second point's y value: ";
	cin  >> y2;

	// processing
	slope = (y2 - y1)/(x2 - x1);

	// output
	cout << "The slope of the line that connects the two points, (" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << "), is " << slope << "." << endl;

	return 0;
}
