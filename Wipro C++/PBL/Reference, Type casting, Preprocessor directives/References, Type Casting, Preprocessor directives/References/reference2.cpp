#include <iostream>
using namespace std;
void myswap(int &a, int &b)
{
   a=a+b;
   b=a-b;
   a=a-b;
}

int main()
{
    
    int i, j;
    cout << "Enter two numbers : \n";
    cin >> i >> j;
    system("clear");
    cout << "\nBefore Swapping :\n";
    cout << " i : " << i << "\t"<< "j : " << j << endl;
    myswap(i,j);
    cout << "\nAfter Swapping :\n";
    cout << " i : " << i << "\t"<< "j : " << j << endl;
}