// Uncle Johny
// https://www.codechef.com/problems/JOHNY
// Aman Kumar

#include<bits/stdc++.h>

using namespace std ;

int main()
{
  int t ;
  cin >> t ;
  
  while( t-- )
  {
    int n, k ;
    cin >> n ;
    
    vector<int> songs ;
    
    for( int i = 0 ; i < n ; i++ )
    {
      cin >> k ;
      songs.push_back( k ) ;
    }
    
    cin >> k ;
    k = songs[ k - 1 ] ;
    
    // Sort the songs
    sort( songs.begin(), songs.end() ) ;
    
    // Traverse and find the song
    for( int i = 0 ; i < n ; i++ )
    {
      if( songs[i] == k )
      {
        k = i ;
        i = n ;  // To terminate the loop
      }
    }
    
    k = k + 1 ;  // 1 indexing
    
    // Print output
    cout << k << "\n" ;
  }
}
