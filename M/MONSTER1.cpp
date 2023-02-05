// Defeat the monster
// https://www.codechef.com/DSAPREP_01/problems/MONSTER1
// Aman Kumar

// Defeat the monster
// https://www.codechef.com/DSAPREP_01/problems/MONSTER1
// Aman Kumar

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

void beeblebrox() ;

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	int t ;
	cin >> t ;
	
	while( t-- )  beeblebrox() ;
	
	return 0 ;
}

void beeblebrox()
{
    ll h, x, y ;
    cin >> h >> x >> y ;
    
    if( x > y )
        cout << 1 << "\n" ;
    else 
       cout << 0 << "\n" ;
}
