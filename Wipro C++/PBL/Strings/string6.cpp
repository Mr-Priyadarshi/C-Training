#include<iostream>
using namespace std;

int checkidentical(char *str1, char *str2)
{
	int flag=0;
	while(*str1!='\0' && *str2!='\0')
	{
		if(*str1!=*str2)
		{
			flag=1;
		}
		str1++;
		str2++;
	}
	if (flag==0)
	return 0;
	else
	return 1;
}
int main()
{
	char str1[100], str2[100];
	cout<<"Enter The First String : \n";
	cin>>str1;
	cout<<"Enter The Second String : \n";
	cin>>str2;
	int c=checkidentical(str1,str2);
	if(c==0)
	cout<<"Strings are equal";
	else
	cout<<"Strings are not equal";
	return 0;
	
}
