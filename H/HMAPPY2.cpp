// Appy and Contest
// https://www.codechef.com/FEB19B/problems/HMAPPY2
// Aman Kumar

#include<bits/stdc++.h>

using namespace std ;

int main()
{
    
    int t ; 	// Number of test cases
	cin >> t ;
	
	while( t-- )
	{
		long int n, a, b, k ;
		long int appy = 0, chef = 0, gcd = 0, lcm = 0 ;
		
		cin >> n >> a >> b >> k ;
		
		appy = n / a ;
		chef = n / b ;
		gcd = __gcd(a,b) ;
		lcm = (a * b )/ gcd ;
		
		lcm = n / lcm ;
		
		if( (( appy + chef ) - 2 * lcm ) >= k )
		    cout << "Win\n" ;
		else 
		    cout << "Lose\n" ;
 		
	}
	return 0 ;
}
