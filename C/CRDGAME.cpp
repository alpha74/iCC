// Chef and Card Game
// https://www.codechef.com/JULY20B/problems/CRDGAME
// Aman Kumar

/*
	INSIGHT: 
		- See code
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

ll digit_sum( int n )
{
	ll sum = 0 ;
	
	while( n > 0 )
	{
		sum += (n%10) ;
		n /= 10 ;
	}
	return sum ;
}

void func()
{
	int n ;
	cin >> n ;
	
	vector<int> chef(n) ;
	vector<int> mont(n) ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		cin >> chef[i] >> mont[i] ;
	}
	
	ll pointc = 0, pointm = 0 ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		ll dschef = digit_sum( chef[i] ) ;
		ll dsmont = digit_sum( mont[i] ) ;
		
		if( dschef == dsmont )
		{
			pointc++ ;
			pointm++ ;
		}
		else if( dschef > dsmont )
			pointc++ ;
		else
			pointm++ ;
	}
	
	if( pointc == pointm )
		cout << "2 " << pointc << "\n" ;
	
	else if( pointc > pointm )
		cout << "0 " << pointc << "\n" ;
	else	
		cout << "1 " << pointm << "\n" ;
}
