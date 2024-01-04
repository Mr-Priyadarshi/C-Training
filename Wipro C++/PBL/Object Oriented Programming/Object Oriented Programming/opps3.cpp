
#include<iostream>
using namespace std;
class student{
    private:
    int admno;
    char sname[20];
    float eng,math,science;
    float total;
    float ctotal(){
        float sum=0;
        sum=eng+math+science;
        return sum;
       
    }
    public:
    void readdata()
    {
        cout<<"Enter your admission number: "<<endl;
        cin>>admno;
        cout<<"Enter your name: "<<endl;
        cin>>sname;
        cout<<"Enter the marks of English, Math & Science: \n";
        cin>>eng>>math>>science;
       
    }
    void Displaydata()
    {
        cout<<"Student Admission no. is: "<<admno<<endl;
        cout<<"Student Name is: "<<sname<<endl;
        cout<<"The Total Marks: "<<ctotal();
    }
}BOOK;
int main()
{
    BOOK.readdata();
    BOOK.Displaydata();
}

