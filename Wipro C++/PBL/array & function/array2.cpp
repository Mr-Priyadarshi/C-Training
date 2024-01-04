#include<iostream>
using namespace std;

int main()
{
	int n,i,s=0;
	int a[n];
	cout<<"Enter the Size of an array \n";
	cin>>n;
	cout<<"Enter "<<n<<" Numbers \n";
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=n;i++)
	{
	s+=a[i];
}
	cout<<"Expected Output :\n";
	cout<<"Sum of all elements in the array is  "<<s;
	return 0;
}
