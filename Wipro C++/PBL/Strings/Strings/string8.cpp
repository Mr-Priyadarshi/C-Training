#include<iostream>

using namespace std;

void mystrrev(char *str1, char *str2)
{
	int i=0, j=0;
	while(str1[i++]!='\0');
	--i;
	while(i>=0)
	str2[j++]=str1[--i];
}
int main()
{
	char str1[100], str2[100];
	cout<<"Enter The String : \n";
	cin>>str1;
	mystrrev(str1,str2);
	cout<<"The Reversed String is : "<<str2;
}
