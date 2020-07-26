// Chef and Steps
// https://www.codechef.com/LTIME86B/problems/CHEFSTEP
// Aman Kumar

/*
	INSIGHT: See code
*/

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

#define ff first
#define ss second
#define MOD 1000000007

void func() ;

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	int t ;
	cin >> t ;
	
	while( t-- )
	{
		func() ;
	}
	
	return 0 ;
}


void func()
{
	ll n, k ;
	cin >> n >> k ;
	
	while( n-- )
	{
		ll s ;
		cin >> s ; 
		
		if( s % k == 0 )
			cout << 1 ;
		else
			cout << 0 ;
	}
	cout << "\n" ;
}
