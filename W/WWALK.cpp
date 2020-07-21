// Weird Walk
// https://www.codechef.com/LTIME84B/problems/WWALK
// Aman Kumar

/*
	INSIGHT:
		- Keep track of distance convered by both
		- If at time interval, the distance covered by both is same AND both have same speed,
			ADD to WEIRD DISTANCE
*/

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

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
	int n ;
	cin >> n ;
	
	vector<int> a(n) ;
	vector<int> b(n) ;
	
	for( int i =0 ; i < n ; i++ )
		cin >> a[i] ;
		
	for( int i = 0 ; i < n ; i++ )
		cin >> b[i] ;
		
	ll adist = 0 ;
	ll bdist = 0 ;
	ll sumdist = 0 ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		// Most important condition
		if( adist == bdist && a[i] == b[i] )
			sumdist = sumdist + a[i] ;
			
		adist = adist + a[i] ;
		bdist = bdist + b[i] ;
	}	
	
	cout << sumdist << "\n" ;
}
