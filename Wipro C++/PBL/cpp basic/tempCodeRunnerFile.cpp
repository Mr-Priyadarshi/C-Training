
#include<iostream>
using namespace std;
void set_bit(int num, int pos)
{
    int j=1;
    j=(j<<pos-1);
    cout<<(num|j);
}

void clear_bit(int num, int pos)
{
    int j=1;
    j=(j<<pos-1);
    j=j^(-1);
    cout<<(num&j);
}
void show_bit(int n, int k)
{
    cout<<((n&(1<<(k-1)))>>(k-1));
}

int main()
{
    set_bit(9,3);
    cout<<endl;
    clear_bit(9,4);
    cout<<endl;
    show_bit(9,4);
}