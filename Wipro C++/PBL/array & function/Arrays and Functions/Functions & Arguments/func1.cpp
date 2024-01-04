#include<iostream>
using namespace std;
int checkPrime(int n);
int main()
{
	int a,b,i,m,f;
	cout<<"Enter two positive integers: \n";
	cin>>a>>b;
	if(a>b)
	{
		a=a+b;
		b=a-b;
		a=a-b;
	}
	cout<<"Prime numbers between "<<a <<" and " <<b <<" are:   ";
	for(i=a;i<=b;i++)
	{
		f=checkPrime(i);
		if(f==1)
		cout<<i<<"\t";
	}
	
}

int checkPrime(int n)
{
	int j,f=1;
	
	for(j=2;j<=n/2;j++)
	{
		if(n%j==0)
		{
			f=0;
			break;
	    }
    }
		return f;
}
