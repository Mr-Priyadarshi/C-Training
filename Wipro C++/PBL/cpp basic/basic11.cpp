#include<iostream>
using namespace std;
int main()
{
	int a,i,j,k,b;
	cout<<"How many rows are to be printed : ";
	cin>>a;
	b=a;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b-1;j++)
		cout<<" ";
		
		for(k=1;k<=2*i-1;k++)
		{
			cout<<"*";
		}
		b--;
		cout<<"\n";
	}
}
