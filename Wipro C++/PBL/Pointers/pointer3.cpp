#include<iostream>
using namespace std;

void s(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a,b;
    cout<<"Enter Two number to swap: \n";
    cin>>a>>b;
    cout<<"Before swapping: a = "<<a<<" b = "<<b<<endl;
    s(&a,&b);
    cout<<"After swapping: a = "<<a<<" b = "<<b;
    return 0;
}
