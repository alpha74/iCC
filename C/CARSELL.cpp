// CARSELL
// https://www.codechef.com/APRIL20B/problems/CARSELL
// Aman Kumar

#include <bits/stdc++.h>

using namespace std ;

#define ll long long 
#define MOD 1000000007

bool comparedesc( ll int a, ll int b )
{
	if( a > b )
		return true ;
	else
		return false ;
}

ll int maxprofit( vector<ll int> &P, ll int &n )
{
	ll int profit = 0, i = 0 ;
	
	// Sort
	sort( P.begin(), P.end(), comparedesc ) ;	
	
	for( i = 0 ; i < n ; i++ )
	{
		P[i] = P[i] - i ;
		
		if( P[i] > 0 )
		{
			profit = ( profit + P[i] ) % MOD ;
		}
	}
	
	return profit % MOD ;
}


int main()
{
	int t ;
	cin >> t ;
	
	while( t-- )
	{
		ll int n, i, temp ;
		cin >> n ;
		
		vector<ll int> P ;
		
		for( i = 0 ; i < n ; i++ )
		{
			cin >> temp ;
			P.push_back( temp ) ;
		}
		
		temp = maxprofit( P, n ) ;
		
		cout << temp << "\n" ;
	}
	return 0 ;
}
