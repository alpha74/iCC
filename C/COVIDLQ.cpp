// COVID Pandemic and Log Queue
// https://www.codechef.com/APRIL20B/problems/COVIDLQ
// Aman Kumar

// INSIGHT:  Store positions of 1 in an array and check for the differences < 6.

#include <bits/stdc++.h>

using namespace std ;

bool covdistance( vector<bool> &A, int n )
{
	bool ret = true ;
	
	// Get indices of 1
	vector<int> one ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		if( A[i] == 1 )
			one.push_back( i ) ;
	}
	
	int size = one.size() ;
	
	if( size > 1 )
	{
		for( int i = 1 ; i < size && ret == true ; i++ )
		{
			if( one[i] - one[i-1] < 6 )
				ret = false ;
		}
	}
	
	return ret ;
}

int main()
{
	int t ;
	cin >> t ;
	
	while( t-- )
	{
		// Input
		int n ;
		cin >> n ;
		
		vector<bool> A ;
		
		for( int i = 0 ; i < n ; i++ )
		{
			bool temp ;
			cin >> temp ;
			A.push_back( temp ) ;
		}
		
		// Processing
		if( covdistance( A, n ) == true )
			cout << "YES\n" ;
		else
			cout << "NO\n" ;
		
	}
	return 0 ;
}
