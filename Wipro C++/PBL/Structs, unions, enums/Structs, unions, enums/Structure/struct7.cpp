#include<iostream>
using namespace std;
int CalculateAvg(struct DATA *d);
struct DATA
{
    int num1;
    int num2;
    int num3;
    int average;
};
int main()
{
    DATA d1,*ptr;
    ptr=&d1;
    cout<<"Enter the Data : "<<endl;
    cout<<"Enter num1 "<<endl;
    cin>>(*ptr).num1;
    cout<<"Enter num2 "<<endl;
    cin>>(*ptr).num2;
    cout<<"Enter num3 "<<endl;
    cin>>(*ptr).num3;

    cout<<"Average marks Scored is : "<<CalculateAvg(ptr)<<endl;
}

    int CalculateAvg(struct DATA *d)
    {
        d->average=(d->num1+d->num2+d->num3)/3;
        return d->average;
    }