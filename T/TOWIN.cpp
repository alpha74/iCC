// Winning Strategy
// https://www.codechef.com/DEM2020/problems/TOWIN
// Aman Kumar

/*
	INSIGHT: Brute Force, after descreasing order sorting.
*/

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int
#define ff first
#define ss second
#define MOD 1000000007

#define FIO

void generalkenobi() ;

int main()
{
	#ifdef FIO
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie(0) ;
	#endif
	
	int t ;
	cin >> t; 
	
	while(t--) generalkenobi() ;
	
	return 0 ;
}

// Get alternate sum from i to n
ll getsum( vector<ll> &arr, ll i )
{
	ll sum = 0 ;
	
	for( ; i < arr.size() ; i+= 2 )
		sum += arr[i] ;
	
	return sum ;
}

void generalkenobi()
{
	int n ;
	cin >> n ;
	
	vector<ll> arr(n) ;
	
	for( int i = 0 ; i < n ; i++ )
		cin >> arr[i] ;
	
	// Sort in descending order
	sort( arr.rbegin(), arr.rend() ) ;
	
	int ans = 0 ;	// 0 : draw   1 : first  2 : second
		
	// Calculate sums for both scenarios
	ll sum1 = 0, sum2 = 0 ;
	ll p = 0 ;
	
	// P1 plays first
	sum1 = arr[p++ ];
	
	if( p < n )
	{
		sum2 += arr[p++] ;
		
		if( p < n )
			sum2 += arr[p++] ;
			
		// Get alternate sums
		sum1 += getsum( arr, p ) ;
		sum2 += getsum( arr, p+1 ) ;	
	}

	if( sum1 > sum2 )
		ans = 1 ;
	
	// Check when P1 plays second
	else
	{
		p = 0 ;
		sum1 = 0 ;
		sum2 = 0 ;
		
		sum2 += arr[p++] ;
		
		if( p < n )
		{
			sum1 += arr[p++] ;
			
			if( p < n )
				sum1 += arr[p++] ;
				
			sum2 += getsum( arr, p ) ;
			sum1 += getsum( arr, p+1 ) ;	
		}
		
		if( sum1 > sum2 )
			ans = 2 ;
	}	
	
	
	// Print ans
	if( ans == 0 )
		cout << "draw\n" ;
	
	else if( ans == 1 )
		cout << "first\n" ;
		
	else
		cout << "second\n" ;
}
