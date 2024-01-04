#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
int x=10;
//const int x=10;                     //Error
int *p=&x;
*p=-100;
cout<<x<<endl;



int a=10;
const int *p1=&a;
//*p1=11;                                  //Error
p1=(int*)malloc(sizeof(int));
cout<<p1<<endl;


int b=10;
int *const p2=&b;
*p2=11;   
//p2=(int*)malloc(sizeof(int));                //Error                                                                                                                                     
cout<<p2<<endl;
}
