#include<iostream>
using namespace std;

void myStrIntcat(char *str1, int num, char *str2,  char *str3)
{
int i,c=0;
string str4= to_string (num);
  for(i=0;str1[i]!='\0';i++)
 {
str3[i]=str1[i];
c++;  }
   for(i=0;str4[i]!='\0';i++)
  {
str3[c]=str4[i];
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
int num;
cout<<"Enter The first String : \n";
cin>>str1;
cout<<"Enter The number : \n";
cin>>num;
cout<<"Enter The second String : \n";
cin>>str2;

myStrIntcat(str1,num,str2,str3);
cout<<"The final concatenate String is : "<<str3;
}
