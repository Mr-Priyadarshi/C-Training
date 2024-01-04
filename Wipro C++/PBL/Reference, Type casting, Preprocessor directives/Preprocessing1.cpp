#include<iostream>
using namespace std;
#define swap(a,b)a=a+b;b=a-b;a=a-b;

int main()
{
int a,b;
cout<<"Enter the first number: ";
cin>>a;
cout<<"Enter the second number: ";
cin>>b;
cout<<"Before Swapping: "<<a<<" "<<b<<endl;
swap(a,b);

cout<<"After Swapping: "<<a<<" "<<b;
}