// Gasoline Introduction
// https://www.codechef.com/LTIME90B/problems/BEGGASOL
// Aman Kumar


/*
	INSIGHT: 
		
*/

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int
#define ss second
#define ff first

void mandalore() ;

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	int t = 1 ;
	cin >> t ;
	
	while( t-- ) mandalore() ;
	
	return 0 ;
}

void mandalore()
{
	int n ;
	cin >> n ;
	
	vector<int> fuel(n) ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		cin >> fuel[i] ;
	}
	
	int travel = 0 ;
	
	travel += fuel[0] ;
	int left = fuel[0] ;
	
	int i = 1 ;
	
	while( left > 0 && i < n )
	{
		left-- ;
		
		left += fuel[i] ;
		travel += fuel[i] ;
		i++ ;
	}
	
	cout << travel << "\n" ;
}
