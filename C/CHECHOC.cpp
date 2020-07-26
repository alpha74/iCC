// Maximum Candies
// https://www.codechef.com/LTIME86B/problems/CHECHOC
// Aman Kumar

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

#define ff first
#define ss second
#define MOD 1000000007

void func() ;

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
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
	ll n, m, x, y ;
	cin >> n >> m >> x >> y ;

	// If 1x1 cell is given
	if( n == 1 && m == 1 )
		cout << x << "\n" ;
	
	else
	{
		int grid = n * m ;
		int candies = 0 ;
		
		if( grid % 2 == 0 )
		{
			if( x*2 >= y )
				candies = grid/2 * y ;
			else
				candies = grid * x ;
		}
		else
		{
			if( x > y )
				candies = (grid/2 + 1) * y ;
			else if( 2 * x >= y )
				candies = grid/2 * y + x ;
			else
				candies = grid *x ;
		}
		
		cout << candies << "\n" ;
	}
}
