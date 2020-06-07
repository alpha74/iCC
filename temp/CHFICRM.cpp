// https://www.codechef.com/JUNE20B/problems/CHFICRM

#include <bits/stdc++.h>

using namespace std ;

bool all_sell_possible( vector<int> &A, int size )
{
	bool possible = true ;
	
	if( size == 0 )
		return true ;
	
	if( A[0] > 5 )
		return false ;
	
	
	int count5 = 1 ;
	int count10 = 0 ;
	int count15 = 0 ;
	
	// 5 5 10 15 10
	// 
	
	for( int i = 1 ; i < size && possible == true ; i++ )
	{
		if( A[i] == 5 )
			count5++ ;
		
		else if( A[i] == 10 )
			count10++ ;
			
		else 
			count15++ ;
			
		// Check for change money to returned
		int change = A[i] - 5 ;
		
		if( change == 5 )
		{
			if( count5 > 0 )
				count5-- ;
			else
				possible = false ;
		}
		// change == 10
		else if( change == 10 )
		{
			// Pay in 10 coins
			if( count10 > 0 )
				count10-- ;
			
			// Pay in 5 coins
			else if( count5 -2 >= 0 )
				count5 -= 2 ;
				
			else
				possible = false ;
		}
		else ;
	}
	
	return possible ;
}

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	int t ;
	cin >> t ;
	
	while( t-- )
	{
		int n ;
		cin >> n ;
		
		vector<int> arr ;
		for( int i = 0 ; i < n ; i++ )
		{
			int temp ;
			cin >> temp ;
			arr.push_back( temp ) ;
		}
		
		if( all_sell_possible( arr, n ) == true )
			cout << "YES\n" ;
		else
			cout << "NO\n" ;
	}
	return 0 ;
}
