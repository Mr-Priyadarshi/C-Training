#include<iostream>
using namespace std;
int main()
{
	int a,b,i,m;
	bool f=false;
	cout<<"Enter a number: ";
	cin>>a;
	b=a/2;
	if(a==1){
	cout<<"  O/P Expected : "<<a <<" is neither prime nor composite";
	
	}
	else{
	
	if(a==0){
	cout<<"  O/P Expected : "<<a <<" is neither prime nor composite";
	}
	else{
	for(i=2;i<=b;i++)
	{
		if(a%i==0)
		{
		cout<<"  O/P Expected : "<<a <<" is not a prime number";
		f=true;
		break;
     	}
	}
	if(f==false)
	cout<<"  O/P Expected : "<<a <<" is a prime number";
}
}
}
