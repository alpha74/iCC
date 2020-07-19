// OR-thodox Distinction
// https://www.codechef.com/COOK120B/problems/ORTHODOX
// Aman Kumar

/*
	INSIGHT:
		- If number of elements > 60 : NO
		- Else do brute force
*/


#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

void func() ;

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	ll t ;
	cin >> t ;
	
	while( t-- )
	{
		func() ;
	}
	
	return 0 ;
}


void func()
{
	int n ;
	cin >> n ;
	
	vector<ll> arr(n) ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		cin >> arr[i] ;
	}
	
	bool ans = true ;
	
	if( n > 62 )
		ans = false ;
		
	else
	{
		set<ll> uniq ;
		
		for( int i = 0 ; i < n && ans == true ; i++ )
		{
			ll orval = 0 ;
			for( int j = i ; j < n && ans == true ; j++ )
			{
				orval = orval | arr[j] ;
			}
			
			if( uniq.find( orval ) != uniq.end() )
				ans = false ;
			else
				uniq.insert( orval ) ;
			
		}
		
	}
	
	if( ans == false )
		cout << "NO\n" ;
	else
		cout << "YES\n" ;
}
