#include<iostream>
using namespace std;
int main()
{
	char *str[]={"welcome", "to", "wipro", "Technologies", "Bangalore"};
	cout<<sizeof(str)<< " " << strlen(str[0])<<endl;
	cout<<str[1]<<endl;
	cout<<str[2][2]<<endl;
	return 0;
}

//Output : 40  7
//         to
//         p
