#include<iostream>
using namespace std;
#define a > b
int main()
{
int x,y;
cout<<"Enter 2 numbers: ";
cin>>x>>y;
#ifdef x>y
cout<<"using macro: x is greater"<<endl;
#else
cout<<"using macro: x is greater"<<endl;
#endif
if(x>y)
cout<<"using normal if else: x is greater than y";
else
cout<<"using normal if else: y is greater than x";
return 0;
}