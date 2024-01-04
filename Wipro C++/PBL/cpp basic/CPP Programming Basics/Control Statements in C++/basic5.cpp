#include<iostream>
using namespace std;
int main()
{
	int a,rem,r=0;
	cout<<"Enter the number to reverse: ";
	cin>>a;
	while(a!=0)
	{
		rem=a%10;
		r=(r*10)+rem;
		a/=10;
	}
	cout<<"Reverse of entered number is: "<<r;
}
