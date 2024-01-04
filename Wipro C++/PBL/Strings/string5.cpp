#include<iostream>
using namespace std;

void vowelstoZ(char *str)
{

int i;

for(i=0; str[i]!='\0'; i++)
{
	if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
	{
		str[i]='z';
	}
}
for(i=0; str[i]!='\0'; i++)
cout<<str[i];

}

int main()
{
    char a[100];
    cout<<"Enter the string: ";
    cin>>a;
	vowelstoZ(a);
    
}

