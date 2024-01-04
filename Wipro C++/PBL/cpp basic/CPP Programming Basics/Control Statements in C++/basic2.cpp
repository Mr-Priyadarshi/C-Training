#include<iostream>
using namespace std;
int main()
{
	int a,r,m=0 ,n=0,re;
	cout<<"Enter a number : ";
	cin>>a;
	while(a!=0)
	{
	r=a%10;
	r=r+1;
	m=m*10+r;
	a=a/10;
	}
	
	while(m!=0){
	
	re=m%10;
	n=n*10+re;
	m=m/10;
}
	cout<<"New Number by adding one to each digit is : "<<n;
}
