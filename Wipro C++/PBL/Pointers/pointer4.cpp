#include<iostream>
using namespace std;

char *my_strstr(const char *s1, const char *s2)
{
	int i,j,c=0,c1=0,f=0;
	while(s1[c]!='\0')
	c++;
	while(s2[c1]!='\0')
	c1++;
	for(i=0; i<=c-c1; i++)
	{
		for(j=i;j<i+c1;j++)
		{
			f=1;
			if(s1[j]!=s2[j-i])
			{
				f=0;
				break;
			}
		}
		if(f==1)
		break;
   }
    if(f==1)
       cout<<"Substring Found : "<<s2;
    else
       cout<<"NULL";	 
}


int main()
{
    char s1[100],s2[100];
    cout<<"Enter the First string: ";
    cin>>s1;
    cout<<"Enter the Second string: ";
    cin>>s2;	
	*my_strstr(s1,s2);
    return 0;  
}

