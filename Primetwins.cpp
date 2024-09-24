#include <iostream>
using namespace std;
int prime(int num)
{  
    int b,flag;
    flag=1;
    b=2;
    while (b<num)
    {
        if (num%b==0){flag=0;}        
        b=b+1;
    }
    return flag;     
}
main()
{   
    int num;
    num=2;
    while (num<=100)
    {   
        if (prime(num) && prime(num+2)) cout<<"\n  "<<num<<" <--> "<<num+2<<endl;
        num+=1;
    }
}