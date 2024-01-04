#include<iostream>
using namespace std;
class b
{
public:
b()
{
cout<<"Invoking from base constr:::";
f();
}
virtual void f()
{
cout<<"base\n";
}
void g()
{
cout<<"invoking f from g::::";
f();
}
};
class d:public b
{int I;
public:
d()
{
I=90;cout<<"invoking f from der constr:::";
f();
}
void f()
{
cout<<"der\n";
I=88;
}
};
int main()
{
b*p=new b;
p->g();
cout<<"I__________\n";
p=new d;
p->g();
}