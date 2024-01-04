#include<iostream>
using namespace std;
int main()
{
	int a,f=1,s;
	cout<<" Enter a Number : ";
	cin>>a;
	s=a;
	do{
		f*=a;
		a--;
	}while(a>0);
	cout<<"The factorial of "<<s <<" is "<<f;

}
