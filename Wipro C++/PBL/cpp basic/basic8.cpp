#include<iostream>
using namespace std;
int main()
{
	int a,rem,r=0,b;
	cout<<"Enter a number of atleast two digit : ";
	cin>>a;
	b=a;
		while(a!=0)
	{
		rem=a%10;
		r=r*10+rem;
		a/=10;
	}
	if(b==r)
	{
		cout<<b<<" is a palindrome";
	}
	else
	cout<<b<<" is not a palindrome";
}
