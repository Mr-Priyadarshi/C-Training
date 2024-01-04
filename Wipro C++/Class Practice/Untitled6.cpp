#include<iostream>
#include<stdlib.h>
using namespace std;

 char *strstr1(const char *str, const char *substring)
{
    const char *a;
    const char *b;

    b = substring;

    if (*b == 0) {
        return (char *) str;
    }

    for ( ; *str != 0; str += 1) {
        if (*str != *b) {
            continue;
        }

        a = str;
        while (1) {
            if (*b == 0) {
                return (char *) str;
            }
            if (*a++ != *b++) {
                break;
            }
        }
        b = substring;
    }

    return NULL;
}
int main()
{
    
    char a[100],b[100];
    char *p;
    cout<<"Enter the First string: ";
    cin>>a;
    cout<<"Enter the Second string: ";
    cin>>b;
	p=strstr1(a,b);

  if(p)
  {
cout<<p;
  }
  else
  {
    cout<<"np";
  }

  return 0; 
    
    
}
