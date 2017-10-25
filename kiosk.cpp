//Katie Mays
//September 11, 2017
//in-class program to calculate area

#include <iostream>
using namespace std;

int main()
{
   //variables
   int length, width, area;

   //input
   cout << "Enter the length: ";
   cin  >> length;
  	
   cout << " Enter the width: ";
   cin  >> width;

   //processing
   area = length * width;

   //output
   cout << "The area of carpeting you need is " << area << " square feet." << endl;

   return 0;
}
