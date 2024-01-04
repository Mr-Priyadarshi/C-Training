#include<iostream>
using namespace std;

int main()
{
    int r,c;
    cout<<"Enter the size of the row and column of array: "<<endl;
    cin>>r>>c;
    int* arr = new int[r*c];
    cout<<"Enter the elements of the array: \n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>*(arr+i*c+j);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<*(arr+i*c+j)<<"\t";
        }
        cout<<endl;
    }
    
    // delete[] arr;
    // arr=NULL;
    // cout<<" ***Array Deleted***";
    return 0;
}