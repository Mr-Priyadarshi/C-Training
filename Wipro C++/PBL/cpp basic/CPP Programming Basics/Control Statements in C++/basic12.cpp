#include<iostream>
using namespace std;
int main()
{
	int a,i,j,k,b;
	char c;
	
	cout<<"How many rows are to be printed : ";
	cin>>a;
	cout<<"Enter a character : ";
	cin>>c;
	b=a;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=b-1;j++)
		cout<<" ";
		
		for(k=1;k<=2*i-1;k++)
		{
			cout<<c;
		}
		b--;
		cout<<"\n";
	}
}
