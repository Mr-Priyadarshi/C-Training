#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	struct empl
	{
		char name[20];
		int emp_code;
		char address[50];
	};
	struct empl e1;
	e1.emp_code=10;
	strcpy(e1.name, "PRATYUSH");
	strcpy(e1.address, "H.No.-24, sec-5, Kolkata");
	cout<<e1.emp_code<<endl;
	cout<<e1.name<<endl;
	cout<<e1.address<<endl;
	
	
}
