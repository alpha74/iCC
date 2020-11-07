// AND Plus OR
// https://www.codechef.com/LTIME89B/problems/ANDOR
// Aman Kumar

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

void vader()
{
	ll n ;
	cin >> n ;
	
	ll ans = -1 ;
	
	for( ll i = 0 ; i <= (n/2) && ans == -1 ; i++ )
	{
		ll val1 = n-i ;
		ll val2 = i ;
		
		if( (val1 & val2) + (val1 | val2) == n )
		{
			cout << val1 << " " << val2 << "\n" ;
			ans = 0 ;
		}
	}
	
	if( ans == -1 )
		cout << "-1\n" ;
}

int main()
{
	ll t ;
	cin >> t ;
	
	while(t--) vader() ;
	return 0 ;
}
