

// Smallest KMP
// https://www.codechef.com/AUG20B/problems/SKMP
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
		sum += (n) ;
		n /= 10 ;
	}
	return sum ;
}
