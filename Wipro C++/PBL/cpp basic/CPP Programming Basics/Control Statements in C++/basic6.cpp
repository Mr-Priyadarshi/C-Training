#include<iostream>
using namespace std;
int main()
{
	int a,b,c,i,m=0;
	cout<<"Input: \n";
	cin>>a>>b>>c;
	for(i=a;i<=b;i++)
	{
		if(i%c==0)
		m++;
	}
	cout<<"Expected Output \n"<<m;
}
