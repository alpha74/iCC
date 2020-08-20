// Another Card Game
// https://www.codechef.com/AUG20B/problems/CRDGAME3
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
	int c, r ;
	cin >> c >> r ;
	
	// Calculate total number of digits of such that their sum will give c and r
	int dc = c/9 ;
	
	if( c % 9 != 0 )
		dc++ ;
	
	int dr = r/9 ;
	
	if( r % 9 != 0 )
		dr++ ;
	
	if( dc < dr )
		cout << 0 << " " << dc << "\n" ;
	else
		cout << 1 << " " << dr << "\n" ;
	
}

