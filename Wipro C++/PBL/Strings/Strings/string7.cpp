#include<iostream>

using namespace std;

void mystrcat(char *str1, char *str2, char *str3)
{
	int i,c=0;
	  for(i=0;str1[i]!='\0';i++)
	  {
	  	str3[i]=str1[i];
	  	c++;
	  }
	  for(i=0;str2[i]!='\0';i++)
	  {
	  	str3[c]=str2[i];
	  	c++;
	  }
	  str3[c]='\0';
	  
}
int main()
{
	char str1[100], str2[100], str3[100];
	cout<<"Enter The First String : \n";
	cin>>str1;
	cout<<"Enter The Second String : \n";
	cin>>str2;
	mystrcat(str1,str2,str3);
	cout<<"The Concatenate String is: "<<str3;
	
}
