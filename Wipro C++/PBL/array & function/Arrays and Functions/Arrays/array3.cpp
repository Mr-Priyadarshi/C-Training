
#include<iostream>
using namespace std;

int main()
{
int m,n,i,j;

cout<<"Enter the number of rows and columns of matrix \n";
cin>>m>>n;
int a[m][n];
int b[n][m];
cout<<"Enter the elements of matrix \n";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)

cin>>a[i][j];

}
cout<<"Entered matrix is \n";
   for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<a[i][j]<<"\t";}
cout<<endl;
}
cout<<"Expected Output\nTranspose of entered matrix is \n";
   for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
    b[i][j]=a[j][i];
cout<<b[i][j]<<"\t";}
cout<<endl;
}
return 0;
}

