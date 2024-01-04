#include<iostream>
using namespace std;
#define oddeven(a)((a%2==0)?1:0)

int main()
{
int a;
cout<<"Enter the number: ";
cin>>a;
oddeven(a);
if(oddeven(a))
cout<<"The given number is Even.\n";
else
cout<<"The given number is Odd.";
}