#include<iostream>
using namespace std;
int main()
{
	int *x,**y,a;
	char *p;
	char s='h';
	p=&s;
	a=5;
	x=&a;
	y=&x;
	cout<<a<<endl;
	cout<<x<<endl;
	cout<<&a<<endl;
	cout<<y<<endl;
	cout<<&x<<endl;
	cout<<*x<<endl;
	cout<<*y<<endl;
	cout<<**y<<endl;
	cout<<p<<endl;
	cout<<s<<endl;
	cout<<&s<<endl;
 	cout<<*p<<endl;
}
