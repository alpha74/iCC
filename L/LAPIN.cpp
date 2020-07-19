// Lapindromes
// Find if given string is Lapindrome or Not.
// https://www.codechef.com/problems/LAPIN
// Aman Kumar

#include <bits/stdc++.h> 

using namespace std ;

int main()
{
  int t ;
  cin >> t ;
  
  while( t-- )
  {
    string A ;
    cin >> A ;
     
    bool lapin = true ; 
        
    map<char,int> fhalf, shalf ;
    long long int size = A.length(), i = 0 ;
    
    if( size > 1 )
    {
      // First half
      for( i = 0 ; i < (size/2) ; i++ )
      {
        auto iter = fhalf.find( A[i] ) ;
        
        if( iter == fhalf.end() )
          fhalf.insert( pair<char,int>( A[i], 1 ) ) ;
        else
          iter -> second = iter -> second + 1 ; 
      }
    
      // Second half
      i = size/2 ;
      if( size % 2 != 0 )
      	i++ ;
      
      for( ; i < size ; i++ )
      {
        auto iter = shalf.find( A[i] ) ;
        
        if( iter == shalf.end() )
          shalf.insert( pair<char,int>( A[i], 1 ) ) ;
        else
          iter -> second = iter -> second + 1 ; 
      }

      // Compare frequencies
      for( i = 0 ; i < (size/2) && lapin == true ; i++ )
      {
        auto iterf = fhalf.find( A[i] ) ;
        auto iters = shalf.find( A[i] ) ;
        
        if( iters == shalf.end() )
          lapin = false ;
        else
        {
          if( iterf -> second != iters -> second ) 
            lapin = false ;
        }        
      }
      
      if( lapin == true )
      {
        i = size/2 ;
      	if( size % 2 != 0 )
      	  i++ ;
        // Compare frequencies
        for( ; i < size && lapin == true ; i++ )
        {
          auto iterf = fhalf.find( A[i] ) ;
          auto iters = shalf.find( A[i] ) ;
        
          if( iters == shalf.end() )
            lapin = false ;
          else
          {
            if( iterf -> second != iters -> second ) 
              lapin = false ;
          }         
        }
      }
    }
    else
    {
      lapin = true ;
    }    
    
    
    // Print output
    if( lapin == true )
      cout << "YES\n" ;
    else
    	cout << "NO\n" ;
  }
  return 0 ;
}
