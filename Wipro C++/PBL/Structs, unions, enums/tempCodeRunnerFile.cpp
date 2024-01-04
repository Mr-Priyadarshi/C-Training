#include <iostream>
using namespace std;

struct data
{
    char c;
    int x;
};
// struct data
// {
//     char arr[10];
//     int x;
// };
// struct data
// {
//     char arr[10];
//     long int x;
// };
// struct data
// {
//     char arr[100];
//     int x;
// };

int main()
{
    data d;
    cout << "size of struct is : " << sizeof(d) << endl;
}