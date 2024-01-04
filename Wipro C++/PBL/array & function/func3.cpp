#include<iostream>
using namespace std;

int factorial(int n);
int main()
{
	int n,i;
	cout<<"Enter an Positive Integer : ";
	cin>>n;

	cout<<"Factorial of "<<n<<" is "<<factorial(n);
	
	
	
}

int factorial(int n)
{
int i,f=1;
for(i=1;i<=n;i++)
{
	f=f*i;
}
return f;
}
