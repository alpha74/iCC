// Chef and String
// https://www.codechef.com/JUNE20B/problems/XYSTR
// Aman Kumar

#include <bits/stdc++.h>

using namespace std ;

int get_dance_pairs( string &s )
{
	int len = s.length() ;
	
	if( len == 0 || len == 1 )
		return 0 ;
		
	int pairs = 0 ;	
	int last = 0, i = 1 ;
	
	while( i < len )
	{
		// If i and last chars form a pair
		if( ( s[i] == 'y' && s[last] == 'x' )||( s[i] =='x' && s[last] == 'y' ) )
		{
			pairs++ ;
			last = i+1 ;
			i = i + 2 ;
		}
		
		else
		{
			last = i ;
			i++ ;
		}
	}
	
	return pairs ;
}

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	int t ;
	cin >> t ;
	
	while( t-- )
	{
		string s ;
		cin >> s ;
		
		cout << get_dance_pairs( s ) << "\n" ;		
	}
	return 0 ;
}
