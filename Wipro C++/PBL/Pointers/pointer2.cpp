#include <iostream>  
using namespace std;  
int main ()  
{  

    int arr[50], arr2[50];  
    int *ptr, i, num=10;      
     
    cout <<"Enter the 10 elements of the array: \n";  
   
    for (i = 0; i < num; i++)  
    {  
        cin >> arr[i];  
    }  
    ptr = &arr[0];  
   
    for (i = 0; i < num; i++)  
    {    
        ptr++;  
    }  
    ptr--;
    for ( i = 0; i < num; i++)  
    {  
        arr2[i] = *ptr;  
        ptr--;  
    }  
    ptr = &arr2[0];  
    for ( i = 0; i < num; i++)  
    {  
        arr[i] = *ptr;  
        ptr++;
    }  
    ptr = &arr[0];
    cout <<"The reversed Order: " << endl;  
     
    for ( i = 0; i < num; i++)  
    {  
        cout << *ptr <<endl;  
        ptr++;  
    }  
    return 0;  
}  