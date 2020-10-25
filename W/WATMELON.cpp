// Watermelon
// https://www.codechef.com/LTIME88B/problems/WATMELON
// amanalphakumar

// Watermelon
// https://www.codechef.com/LTIME88B/problems/WATMELON
// Aman Kumar

/*
	INSIGHT: 
        - If sum >= 0, sum can be made 0 for any array.
*/

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int
#define ff first
#define ss second
#define MOD 1000000007

#define FIO

void vader() ;

int main()
{
	#ifdef FIO
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie(0) ;
	#endif
	
	int t ;
	cin >> t; 
	
	while(t--) vader() ;
	
	return 0 ;
}

void vader()
{
	int n ;
	cin >> n ;
	
	vector<int> arr(n) ;
	
	int sum = 0 ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		cin >> arr[i] ;
		sum += arr[i] ;
	}
	 
	if( sum >= 0 )
		cout << "YES\n" ;
	else
		cout << "NO\n" ; 
	 
}
