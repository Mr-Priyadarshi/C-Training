#include <iostream>
using namespace std;

struct s_memo
{
    int nVal;
    char cVal;
};
union u_memo
{
    int nVal;
    char cVal;
};
int main()
{
    struct s_memo s;
    cout<<"Enter details of structure "<<endl;
    cin>>s.nVal;
    cin>>s.cVal;

    cout<<"Details for structure are : "<<endl;
    cout<<s.nVal<<" "<<s.cVal<<endl;

    union u_memo u;
    cout<<"Enter details of union "<<endl;
    cin>>u.nVal;
    cin>>u.cVal;

    cout<<"Details for union are : "<<endl;
    cout<<u.nVal<<" "<<u.cVal<<endl;

    cout<<"Size of structure and union are : "<<endl;
    cout<<"Size of structure : "<<sizeof(s)<<endl;
    cout<<"Size of Union : "<<sizeof(u)<<endl;

}