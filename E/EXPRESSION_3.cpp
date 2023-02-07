// Third Number Expression
// https://www.codechef.com/DSAPREP_01/problems/EXPRESSION_3
// Aman Kumar

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int
#define ull long long int

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
    bool ret = false ;
    
    vector<ll> num(3,0) ;
    
    cin >> num[0] >> num[1] >> num[2] ;
    
    sort( num.begin(), num.end() ) ;
    
    if( num[0] + num[1] == num[2] )
        ret = true ;
    
    if( ret )
        cout << "YES\n" ;
    else
        cout << "NO\n" ;
}
