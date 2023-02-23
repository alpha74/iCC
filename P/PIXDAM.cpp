// Pixel Damage
// https://www.codechef.com/DSAPREP_01/problems/PIXDAM
// Aman Kumar

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int
#define ull unsigned long long int

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
    int h, w, x, y, k ;
    cin >> h >> w >> x >> y >> k ;
    
    if( sqrt( pow((w-x),2) + pow((h-y),2) ) < k )
        cout << "1\n" ;
    else
        cout << "0\n";
}
