#include <iostream>
using namespace std;
int main()
{  
   float num1, num2;
   int n;
   cout<< "Enter a number: ";
   cin>> num1;
   cout<< "Enter another number: ";
   cin>> num2;
   float sum, sub, mul, div;
   sum= num1+num2;
   sub=num1-num2;
   mul=num1*num2;
   div=num1/num2;

   cout<< "\nThe sum of the two numbers is: "<<sum<<endl;
   cout<< "The subtraction of the two numbers is: "<<sub<<endl;
   cout<< "The multiplication of the two numbers is: "<<mul<<endl;
   cout<< "The division of the two numbers is: "<<div<<endl;
   return 0;

}