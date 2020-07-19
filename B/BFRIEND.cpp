// Bob and His Friends
// https://www.codechef.com/LTIME80B/problems/BFRIEND
// Aman Kumar


#include <bits/stdc++.h>

using namespace std ;

int main()
{
	int t ;
	cin >> t ;
	
	while( t-- )
	{
		int n;
		long long int  a, b, c ;
		vector<long int> f ;
		
		long long int time = 0 ;
		
		cin >> n >> a >> b >> c ;
		
		// Input friend floors
		for( int i = 0 ; i < n ; i++ )
		{
			long long int temp ;
			cin >> temp ;
			
			f.push_back( temp ) ;
		}
		
		vector<long long int> modfb ;
		vector<long long int> modfa ;
		
		for( int i = 0 ; i < n ; i++ )
		{
			long long int temp ;
			temp = abs( f[ i ] - b ) ;
			
			modfb.push_back( temp ) ;
		}
		
		for( int i = 0 ; i < n ; i++ )
		{
			long long int temp ;
			temp = abs( f[ i ] - a ) ;
			
			modfa.push_back( temp ) ;
		}
		
		long long int mintime = 9999999999 ;
		
		for( int i = 0 ; i < n ; i++ )
		{
			long long int currtime = modfb[ i ] + modfa[ i ] + c ;
			
			if( currtime < mintime )
				mintime = currtime ;
		}
		
		// Set the min time
		time = mintime ;
		
		// Print output
		cout << time << "\n" ;
	}
	return 0 ;	
}
