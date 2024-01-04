#include<iostream>
using namespace std;
#define divide_by_two(x)(x>>1)
#define multiply_by_two(x)(x<<1)

int main()
{
cout<<"Multiply by two is : "<<multiply_by_two(10)<<endl;
cout<<"Divide by two is : "<<divide_by_two(10);
return 0;
}