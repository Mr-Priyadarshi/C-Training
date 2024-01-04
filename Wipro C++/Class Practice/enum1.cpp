#include<iostream>
using namespace std;

enum cardsuit { CLUBS=10,   DIAMONDS=3,   HEARTS=9,   SPADES=-4   };
enum xyz {a,b,c=-4,d,e,f} ;
void func( enum xyz var) { cout<<var<<endl ;}
int main() 
{    cout<<d<<endl ;  
  enum cardsuit card1 ;   
   enum xyz card2 = SPADES ; 
      card1 = SPADES ;    
	  cout<<card1<<endl ;  
	    if(card1 == card2) cout<<"same card\n" ; 
		    else cout<<"a diff card\n" ;   
			 card2 = c ;   
			  if(card1 == card2) cout<<"same card\n" ;   
			   else cout<<"a diff card\n" ;    
			   func(card1) ;  
}
