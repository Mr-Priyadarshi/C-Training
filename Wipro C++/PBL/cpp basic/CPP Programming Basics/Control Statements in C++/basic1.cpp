#include<iostream>
using namespace std;
int main()
{
	int a,h,m,s;
	cout<<"Enter the time in seconds: ";
	cin>>a;
	h=a/3600;
	m=(a-(3600*h))/60;
    s=(a-(3600*h)-(m*60));
    cout<<"Time is "<<h <<" hrs "<<m <<" mins " <<s <<" secs";
}
