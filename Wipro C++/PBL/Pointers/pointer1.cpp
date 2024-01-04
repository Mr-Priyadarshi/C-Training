#include<iostream>
using namespace std;
int main()
{
	int a[10],i,n,y=0;
	
	cout<<"Enter the marks scored by 10 students:\n";
	for(i=1;i<=10;i++)
	{
		cin>>a[i];
	}
	int *s=a;
	for(i=0;i<10;i++){
	if((*s++)==a[i])
	y++;
}
	cout<<"The total size allocated to the array is: "<<y;
	
}
