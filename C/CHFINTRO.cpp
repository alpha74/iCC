// Chef and Interactive Contests
// https://www.codechef.com/DEC18B/problems/CHFINTRO
// Aman Kumar

#include<bits/stdc++.h>

using namespace std ;

int main()
{
  int n, r ;
  
  cin >> n >> r ;
  
  while( n-- )
  {
    int k ;
    
    cin >> k ;
    
    if( k >= r )
      cout << "Good boi" << "\n" ;
    else
      cout << "Bad boi" << "\n" ;
    
  }
  return 0 ;
}
