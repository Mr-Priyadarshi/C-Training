#include<iostream>
using namespace std;

int main()
{
int m,n,i;

cout<<"Enter the size of array: \n";
cin>>m;
int a[m];
int j=a[0];
cout<<"Enter the 5 positive integers : \n";
for(i=0;i<m;i++)
cin>>a[i];
cout<<"The answer is ";
for(i=0;i<m;i++)
{
    if(a[i]<j)
    j=a[i];
}
cout<<j;
cout<<" because it is the smallest integer which cannot be formed.";
return 0;
}
