#include<iostream>
using namespace std;

class A
{
public:
A()
{
cout<<"base cons\n";
}
~A()
{
cout<<"base destr\n";
}
};
class B:public A
{
public:
B()
{
cout<<"der cons\n";
}
~B()
{
cout<<"der destr\n";
}
};
int main()
{
A *ptr=new B;
delete(ptr);
return 0;
}