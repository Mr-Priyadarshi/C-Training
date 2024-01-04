#include<iostream>
using namespace std;

int main()
{
int m,n,i,j=0;

cout<<"Enter the size of array: \n";
cin>>m;
int a[m];
cout<<"Enter "<<m<<" elements of the array:\n";
for(i=0;i<m;i++)
cin>>a[i];
cout<<"Expected Output: \n";
for(i=0;i<m;i++)
{
    if(a[i]>j)
    j=a[i];
}
cout<<"Largest element is "<<j;
return 0;
}
