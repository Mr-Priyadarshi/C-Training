#include<iostream>
using namespace std;
int main()
{
	int * ptr=new int;
	cout<<"Enter the no. you want to store : ";
	cin>>*ptr;
	cout<<"Value at memory pointed by ptr = "<<*ptr;
	delete(ptr);

}
