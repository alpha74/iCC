// Chef Loves Cakes
// https://www.codechef.com/ENAU2020/problems/ECAUG201
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
	ll a, b ;
	cin >> a >> b ;
	
	ll hcm = __gcd( a, b ) ;
	ll spend = ( a * b ) / hcm ;
	
	cout << spend << "\n" ;
	
}

