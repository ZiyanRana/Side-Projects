#include <iostream>
using namespace std;
int main()
{  
    int num;
    cout<<"\nThis Programs tells if the entered number is even or odd."<<endl;
    cout<<"Enter an integer: ";
    cin>>num;
    if (num%2==0)cout<<"\nThe entered number is EVEN.";
    else cout<<"\nThe entered number is ODD. ";
    cout<< "\nThankyou for using my program, Goodbye. \n";
}