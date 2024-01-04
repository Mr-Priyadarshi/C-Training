#include<iostream>
using namespace std;
struct EMP
{
    char emp_name[50];
    int emp_id;
    int emp_age;
    float emp_salary;
};
int main(){
    struct EMP e[3];
    cout<<"Enter details for 3 Employees : "<<endl;
    for(int i=0;i<3;i++){
        cout<<"Enter detail of Employee "<<i+1<<endl;
        cin>>e[i].emp_id;
        cin>>e[i].emp_name;
        cin>>e[i].emp_age;
        cin>>e[i].emp_salary;
    }
    cout<<"Details of Employees :- "<<endl;
    for(int i=0;i<3;i++){
    cout<<"Details of Employee "<<i+1<<endl;
    cout<<"Id is "<<e[i].emp_id<<" Name is "<<e[i].emp_name<<" Age is "<<e[i].emp_age<<" Salary is "<<e[i].emp_salary<<endl;
}
}