// Katie Mays
// September 28, 2017
// HW #3: net pay calculations with do while loop

#include <iostream>
using namespace std;

int main ()
{	
	// variables
	double pay, overPay, gross, net;
	int hours, dependants;
	double social, federal, state;
	double unionP = -(10.00), insurance = -(00.00); 
	char rerun;   
	      pay = 16.78;
	  overPay = 25.17;

	// init
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

        do
	{
	    	// input
		cout << "Enter the number of hours worked: ";
		cin  >> hours;
		cout << "  Enter the number of dependants: ";
		cin  >> dependants;
		cout << "\t" << endl;

		// check for number of dependants
		if (dependants >= 3)
		{
			insurance = -(35.00);
		}
	
		// check for overtime
		if (hours <= 40)
		{
		       	gross = hours * pay;
	        }
		else if (hours > 40)
		{
		       	gross = (hours - 40) * overPay + (40) * pay;
		}

		// processing
		 social = -(0.06 * gross);
		federal = -(0.14 * gross);
		  state = -(0.05 * gross);
		    net = gross + social + federal + state + unionP + insurance;

		// output  
		cout << "          Gross pay: " << "\t" << gross     << endl;
		cout << "\t" << endl;
		cout << "Social security tax: " << "\t" << social    << endl;
		cout << " Federal income tax: " << "\t" << federal   << endl;
		cout << "   State income tax: " << "\t" << state     << endl;
		cout << "         Union dues: " << "\t" << unionP    << endl;
		cout << "          Insurance: " << "\t" << insurance << endl;
		cout << "\t" << endl;
		cout << "   Take home pay is: " << "\t" << net       << endl;

		// rerun
		cout << "\t" << endl;
		cout << "Would you like another calculation? Y = yes, N = no: ";
		cin  >> rerun;

  	} while (rerun == 'Y' || rerun == 'y');

	return 0;
}
