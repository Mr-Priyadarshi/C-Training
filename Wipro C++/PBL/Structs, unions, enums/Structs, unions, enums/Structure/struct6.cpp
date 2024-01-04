#include <iostream>
using namespace std;

struct EMP
{
    char emp_name[50];
    int emp_id;
    int emp_age;
    float emp_salary;
};
int main()
{
    EMP ea, eb, ec, *e1, *e2, *e3;
    e1 = &ea;
    e2 = &eb;
    e3 = &ec;

    cout << "Enter the details of Employee 1 " << endl;
    cout << "Enter the ID: " << endl;
    cin >> ea.emp_id;
    cout << "Enter the Name: " << endl;
    cin >> (*e1).emp_name;
    cout << "Enter the Age: " << endl;
    cin >> (*e1).emp_age;
    cout << "Enter the Salary: " << endl;
    cin >> (*e1).emp_salary;

    cout << "Details of the employee 1 is : " << endl;
    cout << "Name is : " << (*e1).emp_name << " Age is : " << (*e1).emp_age << " ID is : " << (*e1).emp_id << " Salary is : " << (*e1).emp_salary << endl;
    
    
    cout << "Enter the details of Employee 2 " << endl;
    cout << "Enter the ID: " << endl;
    cin >> (*e2).emp_id;
    cout << "Enter the Name: " << endl;
    cin >> (*e2).emp_name;
    cout << "Enter the Age: " << endl;
    cin >> (*e2).emp_age;
    cout << "Enter the Salary: " << endl;
    cin >> (*e2).emp_salary;
    
    cout << "Details of the employee 2 is : " << endl;
    cout << "Name is : " << (*e2).emp_name << " Age is : " << (*e2).emp_age << " ID is : " << (*e2).emp_id << " Salary is : " << (*e2).emp_salary << endl;
    
    
    cout << "Enter the details of Employee 3 " << endl;
    cout << "Enter the ID: " << endl;
    cin >> (*e3).emp_id;
    cout << "Enter the Name: " << endl;
    cin >> (*e3).emp_name;
    cout << "Enter the Age: " << endl;
    cin >> (*e3).emp_age;
    cout << "Enter the Salary: " << endl;
    cin >> (*e3).emp_salary;

    cout << "Details of the employee 3 is : " << endl;
    cout << "Name is : " << (*e3).emp_name << " Age is : " << (*e3).emp_age << " ID is : " << (*e3).emp_id << " Salary is : " << (*e3).emp_salary << endl;
}