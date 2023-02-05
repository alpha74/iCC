// Attack on the Kingdom
// https://www.codechef.com/DSAPREP_01/problems/KNGATK
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
    int n ;
    cin >> n ;
    
    vector<int> arr(n,0) ;
    
    for( int i = 0 ; i < n ; i++ )
    {
        cin >> arr[i] ;
    }
    
    sort( arr.begin(), arr.end() ) ;
    
    cout << arr[1] << "\n" ;
}
