// Taxi Cost
// https://www.codechef.com/DSAPREP_01/problems/RAIN8TEST?tab=statement
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
    int n, x ;
    cin >> n >> x ;
    
    vector<int> day(n,0) ;
    
    ll cost = 0 ;
    
    cin >> day[0] ;
    
    cost = (day[0] == 1) ? x : 0 ;
    
    for( int i = 1 ; i < n ; i++ )
    {
        cin >> day[i] ;
        
        if(day[i] == 1 || day[i-1] == 1)
            cost += x ;
    }
    
    cout << cost << "\n" ;
}
