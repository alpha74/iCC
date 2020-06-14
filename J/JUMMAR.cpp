// https://www.codechef.com/MARS2020/problems/JUMMAR

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

int getPillars( vector<int> &h, ll k )
{
  ll num = 0 ;
  
  for( int i = 0 ; i < h.size() && k >= 0 ; i++ )
  {
    if( k >= h[i] )
    {
      num++ ;
      k -= h[i] ;
      k *=2 ;
    }
    else
      i = h.size() ;
  }
  
  return num ;
}

int main()
{
  int t ;
  cin >> t ;
  while( t-- )
  {
    ll n, k ;
    cin >> n >> k ;
    vector<int> hs ;
    
    // Input height array
    for( int i = 0 ; i < n ; i++ )
    {
      int temp ;
      cin >> temp ;
      hs.push_back( temp ) ;
    }
    
    cout << getPillars( hs, k ) << "\n" ;    
  }
  return 0 ;
}
