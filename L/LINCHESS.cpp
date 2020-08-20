// Chef and Linear Chess
// https://www.codechef.com/AUG20B/problems/LINCHESS
// Aman Kumar

/*
	INSIGHT: 
		- See comments
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
	int n, k ;
	cin >> n >> k ;
	
	vector<int> p(n) ;
	
	for( int i = 0 ; i < n ; i++ )
		cin >> p[i] ;
		
	int lose = -1 ;
	int ans = INT_MAX ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		if( k % p[i] == 0 && (k/p[i])-1 < ans )
		{
			lose = p[i] ;
			ans = min( ans, (k/p[i] )-1 ) ;
		}
		
	}	
		
	if( lose == -1 )
		cout << "-1\n" ;
	else
		cout << lose << "\n" ;
			
	
}

