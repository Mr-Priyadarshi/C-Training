#include<iostream>
using namespace std;
int main()
{
	int a,c=0,i,d=0;
	int m[20];
	cout<<"Enter the 20 elements in an array : \n";
		for(i=0;i<20;++i)
	{
		cin>>m[i];
	}
	for(i=0;i<20;i++)
	{
		if(m[i]%2==0)
		{
			c++;
			d+=m[i];
		}
		
	}
	cout<<"The count of even numbers present in the array : "<<c<<endl;
	cout<<"The sum of values of all the even number : "<<d;
	
}
