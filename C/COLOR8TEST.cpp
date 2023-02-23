// Color the Cube
// https://www.codechef.com/DSAPREP_01/problems/COLOR8TEST?tab=statement
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
    int n = 0;
    cin >> n ;
    
    n = ceil(n/2.0);
    
    vector<int> price(6,0) ;
    
    ll totalPrice = 0;
    
    for( int i = 0 ; i < price.size() ; i++ )
    {
        cin >> price[i] ;
        
        totalPrice += (price[i]) ;
    }
    
    cout << totalPrice * n << "\n" ;
}
