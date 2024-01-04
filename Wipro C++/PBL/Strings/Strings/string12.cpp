#include<iostream>
using namespace std;
int main()
{
char p[100];
cout<<"Enter the Input Data: \n";
cin.getline(p,100);
int i=0;
bool flag=false;
for(;p[i]!='\0';i++)
{
    i++;
    
}
if(i>=7)
{  
    flag=true;
}
if(flag)
{for(i=0;p[i]!='\0';i++)
{
  cout<<p[i];
}}
else{
    cout<<"invalid input";
}
return 0;
}