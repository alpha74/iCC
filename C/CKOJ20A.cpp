// Zakia and sticks
// https://www.codechef.com/COJK2020/problems/CKOJ20A
// Aman Kumar

/*
	INSIGHT:
		- Sort
		- Start from last and check consecutinve three for A1 + A2 > A3
*/

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

void func() ;

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	//ll t ;
	//cin >> t ;
	
//	while( t-- )
	{
		func() ;
	}
	
	return 0 ;
}


void func()
{
	ll n ;
	cin >> n ;
	
	vector<ll> sides(n) ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		cin >> sides[i] ;
	}
	
	bool ans = false ;
	vector<ll> res(3) ;
	
	// If number of sides is < 3
	if( n < 3 )
		ans = false ;
		
	else
	{
	
		// Sort the array
		sort( sides.begin(), sides.end() ) ;
	
		for( int p = n-1 ; p >= 2 && ans == false ; p-- )
		{
			if( sides[p] < sides[p-1] + sides[p-2] )
			{
				res[0] = sides[p] ;
				res[1] = sides[p-1] ;
				res[2] = sides[p-2] ;
				ans = true ;
			}
		}
		
	}
	
	if( ans == false )
		cout << "NO\n" ;
	else
	{
		cout << "YES\n" ;
		
		sort( res.begin(), res.end() ) ;
		cout << res[2] << " " << res[1] << " " << res[0] ;
	}
	
}
