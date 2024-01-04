#include<iostream>
#include<string.h>
using namespace std;
struct student
{
    char student_name[100];
    int roll_no;
    int mark1;
    int mark2;
    int mark3;
};
int main()
{
    struct student s[5];
    cout<<"Enter details for 5 Students : "<<endl;
    for(int i=0;i<5;i++){
        cout<<"Enter detail of Student "<<i+1<<endl;
        cin>>s[i].roll_no;
        cin>>s[i].student_name;
        cin>>s[i].mark1;
        cin>>s[i].mark2;
        cin>>s[i].mark3;
    }
    int avg[5];
    int max=-1;
    int min=101;
    string name1;
    string name2;
    for(int i=0;i<5;i++)
    {
        cout<<"Average Marks of Student "<<i+1<<endl;
        avg[i]=(s[i].mark1+s[i].mark2+s[i].mark3)/3;
        cout<<avg[i]<<endl;
        if(avg[i]>max)
        {
            max=avg[i];
            name1=s[i].student_name;
        }
        if(avg[i]<min)
        {
            min=avg[i];
            name2=s[i].student_name;
        }
    }
    cout<<"Name of student who scored highest average is "<<name1<<" & Average marks is "<<max<<endl;
     cout<<"Name of student who scored least average is "<<name2<<" & Average marks is "<<min<<endl;
}