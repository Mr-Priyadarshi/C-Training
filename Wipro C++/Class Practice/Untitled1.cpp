#include<iostream>
using namespace std;

void func(int *a, int b)
{
	*a=400;
	b=600;
}
int main()
{

 int c,d;
 c=20;
 d=30;
 func(&c,d);
 cout<<c<<endl<<d;
}


//output:
//
//400
//30
