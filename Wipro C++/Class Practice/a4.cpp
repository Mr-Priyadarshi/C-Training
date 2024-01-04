#include <iostream>
using namespace std;

int main()
{
	int x = 10;
	int* ptr = &x;
	int& ptr1 = *ptr;
    cout<<x<<endl<<ptr<<endl<<ptr1;
}
