#include<iostream>
using namespace std;

struct BATSMAN
{ 
    char name[100]; 
    int age; 
    int highest_score; 
    int least_score; 
    int no_of_ducks;
};
void printData(struct BATSMAN *bm)
{
    for(int i=0;i<3;i++)
    {
        cout<<"Details of Batsman "<<i+1<<endl;
        cout<<"Name is : "<<bm[i].name<<" Age is : "<<bm[i].age<<" Highest Score : "<<bm[i].highest_score<<" Least score : "<<bm[i].least_score<<" No. of Ducks : "<<bm[i].no_of_ducks<<endl;
    }
}
int main()
{
    struct BATSMAN b[3];
    cout<<"Enter details of Batsman"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"Enter details of Batsman : "<<i+1<<endl;
        cin>>b[i].name;
        cin>>b[i].age;
        cin>>b[i].highest_score;
        cin>>b[i].least_score;
        cin>>b[i].no_of_ducks;
    }
printData(b);
}