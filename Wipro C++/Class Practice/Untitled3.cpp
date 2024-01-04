#include<iostream>
using namespace std;
 int *func()
 {
 	int *ptr, var=99; ptr=&var;
 	return(ptr);
 }
 
 void jlt(int a, int b){
 	int var=7;
 }
 
 int main()
 {
 	int var1,var2,*iptr;
 	var1=10;
 	var2=20;
 	iptr=func();
 	cout<<*iptr<<endl;
 jlt(var2,var1);
 	cout<<*iptr;
 }
