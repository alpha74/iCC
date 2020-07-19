// Chef and Street Food
// https://www.codechef.com/LTIME80B/problems/STFOOD
// Aman Kumar




#include <bits/stdc++.h>

using namespace std ;

int main()
{
	int t ;
	cin >> t; 
	
	while( t-- )
	{
		int n ;
		cin >> n ;
		
		vector<int> s ;		// Number of stores
		vector<int> v ;		// Price of ith item
		vector<int> p ;		// No. of people for ith item
		
		vector<int> profit ;	// v * floor( p / s ) 
		
		int max = 0 ;
		
		// Input elements
		for( int i = 1 ; i <= n ; i++ )
		{
			int temp ;
			// s
			cin >> temp ;
			temp = temp + 1 ;
			s.push_back( temp ) ;
			
			// p
			cin >> temp ;
			p.push_back( temp ) ;
			
			// v
			cin >> temp ;
			v.push_back( temp ) ;
		}
		
		for( int i = 1 ; i <= n ; i++ )
		{
			int temp = 0 ;
			
			temp = v[ i-1 ] * floor( p[ i - 1 ] / s[ i - 1 ] ) ;
			
			profit.push_back( temp ) ;
		}
		
		// Traverse and find largest
		for( int i = 0 ; i < profit.size() ; i++ )
		{
			if( profit[ i ] > max )
				max = profit[ i ] ;
		}
		
		// Print output
		cout << max << "\n" ;
		
	}
	return 0 ;
}
