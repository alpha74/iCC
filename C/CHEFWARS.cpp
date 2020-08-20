// Chef Wars-Return of the Jedi
// https://www.codechef.com/AUG20B/problems/CHEFWARS
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
	int h, p ;
	cin >> h >> p ;
	
	while( h > 0 && p > 0 )
	{
		h -= p ;
		p /= 2 ;
	}
	
	if( h > 0 )
		cout << 0 << "\n" ;
	else
		cout << 1 << "\n" ;
	
}

