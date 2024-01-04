#include<iostream>
using namespace std;
int main()
{
	int a,b,i,j;
	cout<<"Enter the number of elements of the array \n";
	cin>>a;
	int m[a];
	cout<<"Enter the numbers \n";
	for(i=0;i<a;++i)
	{
		cin>>m[i];
	}
	for(i=0;i<a;++i)
	{
		for(j=i+1;j<a;++j)
		{
			if(m[i]<m[j])
			{
				b=m[i];
				m[i]=m[j];
				m[j]=b;
			}
		}
	}
	
	cout<<"The numbers arranged in descending order are given below \n";
	for(i=0;i<a;++i)
	cout<<m[i]<<endl;
	return 0;
}
