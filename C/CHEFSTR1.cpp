// Chef and Strings
// https://www.codechef.com/JULY20B/problems/CHEFSTR1
// Aman Kumar

/*
	INSIGHT: 
		- See code
*/

#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define ff first
#define ss second
#define MOD 1000000007

void func() ;

int main() 
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie(0) ;
	
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
	ll n ;
	cin >> n ;
	
	vector<int> s(n) ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		cin >> s[i] ;
	}
	
	ll skip = 0 ;
	
	for( int i = 1 ; i < n ; i++ )
	{
		ll val = abs( s[i] - s[i-1] )-1 ;
		
		if( val > 0 )
			skip += val ;
	}
	
	cout << skip << "\n" ;
}
