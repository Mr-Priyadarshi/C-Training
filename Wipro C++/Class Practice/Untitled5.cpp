#include<iostream>
using namespace std;
 
 void f1(int x)
 {
 	cout<<x;
 }
 void f2(int x)
 {
 	cout<<x;
 }
 
 int main()
 {
 	void(*fptr)(int);
 	int rep;
 	cin>>rep;
 	if(rep==1)
 	fptr=f1;
 	else
 	fptr=f2;
 	fptr(rep);
 }
