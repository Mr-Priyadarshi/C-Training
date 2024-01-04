#include<iostream>
using namespace std;
int fact(int c)
{
    if(c>=0)
    {
        if(c==0 || c==1)
        return 1;
        else
        return c*fact(c-1);
    }
    else
    return -1;

}

int main()
{
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    int val=fact(a);
    if(val>=0)
    cout<<"Factorial = "<<val;
    else
    cout<<"Invalid Argument";

}