#include<iostream>
using namespace std;

int main()
{
int m,n,i,j;
bool f=false;
cout<<"Enter the size of an array: ";
cin>>m;
int a[m];
cout<<"Enter the elements of an array: \n";
for(i=0;i<m;i++)
{
cin>>a[i];
}
cout<<"Enter the elements to search: ";
cin>>n;
cout<<"EXpected Output: \n";
for(i=0;i<m;i++)
{
if(a[i]==n){

cout<<"*** Element "<<n<<" Found and its index is "<<i<<"***";
f=true;
break;
}}
if(f==false)
cout<<"!!! Element not Found!!!";
}
