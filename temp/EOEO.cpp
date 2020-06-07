// https://www.codechef.com/JUNE20B/problems/EOEO

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

ll count_wins( ll &ts ) 
{
	if( ts <= 2 )
		return 0 ;
			
	ll wins = 0 ;
	
	// If ts is odd
	if( ts % 2 != 0 )
		wins = ts / 2 ;
	
	// If ts is even
	else
	{
		ll js = ts ;
		
		// Keep halving js till it reaches an odd value
		// do while js > 1 and js is even
		while( js > 1 && js % 2 == 0 )
		{
			js /= 2 ;
		}
		
		// js wins will be same val as odd of ts
		if( js > 1 )
			wins = js / 2 ;
	}
	
	return wins ;
}

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	int t ;
	cin >> t ;
	
	while( t-- )
	{
		ll ts ;
		cin >> ts ;
		
		cout << count_wins( ts ) << "\n" ;
	}
	return 0 ;
}
