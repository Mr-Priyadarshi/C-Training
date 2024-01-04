
#include<iostream>
using namespace std;
class BOOK
{
    private:
    int BOOK_NO;
    char BOOKTITLE[20];
    float PRICE;
    int TOTAL_COST()
    {
        int N;
        cout<<"Enter number of copies: ";
        cin>>N;
        int cost=N*PRICE;
        return cost;
       
    }
    public:
    void INPUT(){
        cout<<"Enter the book number: "<<endl;
        cin>>BOOK_NO;
        cout<<"Eter the title of the book: "<<endl;
        cin>>BOOKTITLE;
        cout<<"Enter the price: "<<endl;
        cin>>PRICE;
       
    }
    void PURCHASE()
    {
        int t=TOTAL_COST();
        cout<<"Total cost to pay: "<<t;
    }
   
}BOOK;
int main()
{
    BOOK.INPUT();
    BOOK.PURCHASE();
}
