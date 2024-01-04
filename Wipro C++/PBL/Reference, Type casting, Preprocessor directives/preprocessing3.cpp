#include<iostream>
using namespace std;
#define CASE_CHANGE(str)((str[i]>='a' && str[i]<='z')?(str[i]=str[i]-32):0)

int main()
{
string str1=" ";
cout<<"Enter a string: ";
cin>>str1;
for(int i=0;str1[i]!='\0';i++)
CASE_CHANGE(str1);
cout<<"After changing: "<<str1;
return 0;
}