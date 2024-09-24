#include <iostream>
using namespace std;
main()
{ 
    int num, n, f;
    cout<< "Enter a number: ";
    cin>> num;
    n=1;
    f=1; 
    while (n<=num)
    {
        f=f*n;
        n++;
    }
    cout<<"The factorial of the entered number is: "<<f ;
} 