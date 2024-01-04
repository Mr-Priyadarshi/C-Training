#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char a1[20],a2[20];
	int i=10;
	cout<<"Enter element\n";
	cin>>a1>>a2;
	cout<<a1 <<" , " <<i <<" is an integer\n";
	strcpy(a2,a1);
	cout<<"a2 contains: "<<a2<<endl;
	strcat(a1,"Bye");
	cout<<"a1 is now: "<<a1<<endl;
	cout<<strlen(a2)<<" is a length of string a2\n";
	strcpy(a1,"AAA");
	strcpy(a2,"BBB");
	if(strcmp(a1,a2)>0)
	cout<<"str a1 is greater than a2";
	else
	cout<<"str a2 is greater than a1";
return 0;
}
