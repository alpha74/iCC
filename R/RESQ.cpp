// Arranging Cup Cakes
// https://www.codechef.com/problems/RESQ
// Aman Kumar

#include<bits/stdc++.h>

using namespace std ;

int main()
{
  int t ;
  cin >> t ;
  
  while( t-- )
  {
    int n, diff ;
    cin >> n ;
    
    diff = n + 1 ;
    
    int sqn = sqrt( n ) ;
    
    if( sqn * sqn == n || n == 1 )
    	diff = 0 ;
    	
    else
    {
      for( int i = 1 ; i <= sqn ; i++ )
      {
        if( n % i == 0 )
        {
          int m = n / i ;
          
          if( abs( m - i ) < diff )
            diff = abs( m - i ) ;
        }
      }
    }
    
    // Print difference
    cout << diff << "\n" ;
  }
  return 0 ;
}
