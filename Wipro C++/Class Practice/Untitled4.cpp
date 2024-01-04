 #include<iostream>
using namespace std;
int main()
{

char arr[5][50], *As[5];
int cntr;
for(cntr=0;cntr<=4;cntr++)
{
As[cntr]=arr[cntr];
cin>>As[cntr];
cout<<cntr+1 <<"\t" <<As[cntr]<<endl;
*As[cntr]='#';
As[cntr][1]='$';
cout<<cntr+1 <<"\t" <<As[cntr];	
}
}
