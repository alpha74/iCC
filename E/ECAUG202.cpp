// Angry Delta
// https://www.codechef.com/ENAU2020/problems/ECAUG202
// Aman Kumar

/*
	INSIGHT: 
		See code
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
	
	int t =1  ;
	cin >> t; 
	
	while(t--) generalkenobi() ;
	
	return 0 ;
}


void generalkenobi()
{
	int n ;
	cin >> n ;
	
	vector<int> val(n) ;
	
	for( int i = 0 ; i <  n ; i++ )
	{
		cin >> val[i] ;
	}
	
	ll dam = 0 ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		if( val[i] % 2 == 0 )
			dam += val[i] ;
	}
	
	cout << dam << "\n" ;
}

