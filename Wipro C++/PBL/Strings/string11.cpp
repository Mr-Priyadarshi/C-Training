
#include<iostream>
using namespace std;
int i=0;
int mystrlen(char*s)
{
int c=0;
while(*s!='\0')
{
c++;
s++;
}
return c;
}
int main()
{
char a[50];
cout<<"Enter the String"<<endl;
cin>>a;
cout<<"Length of the string is : "<<mystrlen(a);
}