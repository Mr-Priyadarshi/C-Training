#include<iostream>
using namespace std;

int GetVowelCount(char *str)
{

int count=0, i=0;
char a;

for(i=0; str[i]!='\0'; i++)
{
	if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
	{
		count++;
	}

}
return count;

}

int main()
{
    while(1)
    {
   char str[20];
   int count=0;
   cout<<"Enter The Word: \n";
   cin>>str;
   count=GetVowelCount(str);
   if(count>=1)
   {
       cout<<str<<" -- "<<count<<endl;
   }
   else
   cout<<str<<endl;
}
}

