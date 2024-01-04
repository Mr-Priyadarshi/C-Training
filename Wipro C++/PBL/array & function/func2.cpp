#include<iostream>
using namespace std;

int primenum(int n);
int main()
{
	int n,i;
	cout<<"Enter a Positive Integer : ";
	cin>>n;
	int f=0;
	for(i=2;i<=n/2;i++)
	{
		if(primenum(i)==1)
		{
			if(primenum(n-i)==1)
			{
				cout<<n<<" = "<<i<<" + "<<n-i<<endl;
			}
		}
	}
	
	
}

int primenum(int n)
{
	int i, isPrime=1;
	for(i=2;i<=n/2;i++){
		if(n%i==0)
		{
			isPrime=0;
			break;
		}
	}
	return isPrime;
}
