// Racing Horses
// https://www.codechef.com/problems/HORSES
// Aman Kumar

#include<bits/stdc++.h>

using namespace std ;

int main()
{
  int t ;
  cin >> t ;
  
  while( t-- )
  {
    int n, temp ;
    cin >> n ;
    
    vector<int> horse ;
    
    // Input elements
    for( int i = 0 ; i < n ; i++ )
    {
      cin >> temp ;
      horse.push_back( temp ) ;
    }
    
    // Sort them
    sort( horse.begin(), horse.end() ) ;
    	
    temp = horse[ n - 1 ] ;
    
    // Traverse and find the min difference
    for( int i = 1 ; i < n ; i++ )
    {
      if( horse[i] - horse[i-1] < temp )
      {
        temp = horse[i] - horse[i-1] ;
      }
    }
    
    // Print output
    cout << temp << "\n" ;
  }
  
  return 0 ;
}
