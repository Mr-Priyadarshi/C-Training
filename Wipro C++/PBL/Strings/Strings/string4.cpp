#include<iostream>
using namespace std;

int mystrlen(char* str)
{
	int c=0;
	while(*str!='\0')
	{
		c++;
		str++;
	}
	return c;
}

int main()
{
	char a[50];
	int length;
	cout<<"Enter the string :\n";
	cin>>a;
	length=mystrlen(a);
	cout<<"The length of the given string is : "<<length;
	return 0;
}