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
   cout<< "\nChoose the operation to be performed."<<endl;
   cout<< " \n1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n"<<endl;
   cout<< "Enter the required operation's number: ";
   cin>>n;
   cout<<endl;
   float sum, sub, mul, div;
   sum= num1+num2;
   sub=num1-num2;
   mul=num1*num2;
   div=num1/num2;

   if (n==1)      cout <<"The sum of the two numbers is: " <<sum;
   else if (n==2) cout <<"The subtraction of the two numbers is: " <<sub;
   else if (n==3) cout <<"The multiplication of the two numbers is: " <<mul;
   else if (n==4) cout <<"The division of the two numbers is: " <<div;
   else  cout <<"Invalid input, choose between 1-4";
   return 0;

}