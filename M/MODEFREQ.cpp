// Mode of Frequencies
// https://www.codechef.com/LTIME87B/problems/MODEFREQ
// Aman Kumar

/*
	INSIGHT: 
		See comments
*/

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int
#define ff first
#define ss second
#define MOD 1000000007

#define FIO
#define DBGs

void darthvader() ;

int main()
{
	#ifdef FIO
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie(0) ;
	#endif
	
	int t = 1 ;
	cin >> t ; 
	
	while(t--) darthvader() ;
	
	return 0 ;
}

void darthvader()
{
	ll n ;
	cin >> n ;
	
	vector<ll> arr(n) ;
	
	// Freq of numbers
	map<ll,ll> freq ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		cin >> arr[i] ;
		
		freq[ arr[i] ]++ ;
	}
	
	// Freq of freq
	map<ll,ll> ffreq ;
	
	for( auto it = freq.begin() ; it != freq.end() ; it++ )
	{
		ffreq[ it->ss ]++ ;
	}
	
	int currfreq = 0 ;
	int mode = 0 ;
	
	// Find first largest freq of freq
	for( auto it = ffreq.begin() ; it != ffreq.end() ; it++ )
	{
		if( it->ss > currfreq )
		{
			currfreq = it->ss ;
			mode = it->ff ;
		}
		
		#ifdef DBG
		cout << "\n f: " << it->ff << "  v: " << it->ss ;   
		#endif
	}
	
	cout << mode << "\n" ;
}

