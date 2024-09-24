#include <iostream>
using namespace std;
int main()
{  
    cout<< "Enter a number: ";
    int num, flag;
    cin>> num;
    int b;
    flag=1;
    b=2;
    while (b<num)
    {
        if (num%b==0){flag=0;}        
        b=b+1;
    }
        if (flag==0){cout<<"The entered number is NOT prime.";}
        else cout<<"The entered number is Prime";
}