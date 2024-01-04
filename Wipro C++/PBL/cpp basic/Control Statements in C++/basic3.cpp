#include<iostream>
using namespace std;
int main()
{
	int a,m,n,o;
	cout<<"Enter amount to be withdrawn in Hundreds: ";
	cin>>a;
	m=a/1000;
	n=a/200;
	o=a/100;
	cout<<"Cashier gives you 1000 currency notes of "<<m<<endl;
	cout<<"or \n";
	cout<<"200 currency notes of "<<n<<endl;
	cout<<"or \n";
	cout<<"100 currency notes of "<<o<<endl;
}
