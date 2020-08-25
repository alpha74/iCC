// Helping Hands
// https://www.codechef.com/DEM2020/problems/HELPHAND
// Aman Kumar

/*
	INSIGHT: 
		- Precalculate the values.
		- Calculate values for 1,2,3,4 and use for filling rest of them.
		- For each value of n if n is prime, +2 the last val.
			else, +1 the last value
*/

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int
#define ff first
#define ss second
#define MOD 1000000007

#define FIO

const int N = 1000006 ;
int steps[ 1000006 ] ;

void preCal() ;
void generalkenobi() ;

int main()
{
	#ifdef FIO
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie(0) ;
	#endif
	
	// Precalculate the answers
	preCal() ;
	
	int t ;
	cin >> t; 
	
	while(t--) generalkenobi() ;
	
	return 0 ;
}


// Returns if n is prime or not
bool isPrime( int n )
{
	bool prime = true ;
	
	for( int i = 2 ; i*i <= n && prime == true ; i++ )
	{
		if( n % i == 0 )
			prime = false ;
	}
	return prime ;
}


// Precal the answers
void preCal()
{
	steps[0] = 0 ;
	steps[1] = 0 ;
	steps[2] = 1 ;
	steps[3] = 2 ;
	steps[4] = 3 ;
	
	// Precalculate the answers
	for( int i = 5 ; i < N ; i++ )
	{
		if( isPrime(i) == true )
			steps[i] = steps[i-1] + 2 ;
		else
			steps[i] = steps[i-1] + 1 ;
	}
}


void generalkenobi()
{
	int n ;
	cin >> n ;
	
	cout << steps[n] << "\n" ;
}
