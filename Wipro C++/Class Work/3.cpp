#include<iostream>
using namespace std;
class A
{
public:
virtual void f()
{
cout<<"f::AAA\n";
}
};
class B:public A
{
public:
void f()
{
cout<<"f::BBB\n";
}
virtual void g()
{
cout<<"g::BBBB\n";
}
};
int main()
{
B derived_obj;
A *base_ptr=&derived_obj;

//base_ptr->g();
base_ptr->f();
return 0;
}