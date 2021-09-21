// Fake GCD
// https://www.codechef.com/COOK133B/problems/FAKEGCD
// Aman Kumar


#include <bits/stdc++.h>

using namespace std ;

#define ll long long int
#define ff first
#define ss second
#define MOD 1000000007

#define FIO

void generalkenobi()
{
	int n ;
	cin >> n ;
	
	for( int i = 1 ; i <= n ; i++ )
		cout << i << " " ;

	cout << "\n" ;
}

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
