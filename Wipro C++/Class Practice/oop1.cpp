#include<iostream>
using namespace std;

class item
{
    int number;
    float cost;

    public:
    void getdata(int a, float b)
    {
        number=a;
        cost=b;
    }
    void dispdata()
    {
        cout<<number*cost<<endl;
    }
};
int main()
{
    item i1,i2;
    i1.getdata(10,12.6);
    i2.getdata(13,7.8);
    i1.dispdata();
    i2.dispdata();
}