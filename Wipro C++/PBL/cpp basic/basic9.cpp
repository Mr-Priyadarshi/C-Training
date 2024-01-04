#include<iostream>
using namespace std;
int main()
{
	int a,i,c=0,r,p;
	cout<<"Enter a Number: ";
	cin>>a;
	p=a;
	while(a!=0)
	{
		r=a%10;
		c=c+r;
		a/=10;
	}
	cout<<"The sum of the digits of "<<p <<" is "<<c;
}
