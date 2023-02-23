// Emotional Proximity
// https://www.codechef.com/DSAPREP_01/problems/EMPR
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
    int p, x, y, z ;
    cin >> p >> x >> y >> z ;
    
    double ret = 0.0;
    
    if(z == 1)
        ret = p + ( (p*y*1.0) / 100 ) ;
    else
        ret = p - ( (p*x*1.0) / 100 );
    
    cout << setprecision(10) << std::fixed;
    cout << ret << "\n" ;
}
