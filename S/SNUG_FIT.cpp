// School of Geometry
// https://www.codechef.com/FEB20B/problems/SNUG_FIT
// Aman Kumar

// SNUG_FIT
#include <bits/stdc++.h>

using namespace std ;

#define int long long int

int32_t main()
{
	int t ;
	cin >> t ;
	
	while( t-- )
	{
		int n ;
		cin >> n ;
		
		vector<int> a ;
		vector<int> b ;
		
		// Input A
		for( int i = 0 ; i < n ; i++ )
		{
			int temp ;
			cin >> temp ;
			
			a.push_back( temp ) ;
		}
		
		// Input B
		for( int i = 0 ; i < n ; i++ )
		{
			int temp ;
			cin >> temp ;
			
			b.push_back( temp ) ;
		}
		
		// Sort A and B 
		sort( a.begin(), a.end() ) ;
		sort( b.begin(), b.end() ) ;
		
		int sum = 0 ;
		
		for( int i = 0 ; i < n ; i++ )
		{
			sum = sum + min( a[i], b[i] ) ;
		}
		
		// Print output
		cout << sum << "\n" ;
		
	}
	return 0 ;
}
