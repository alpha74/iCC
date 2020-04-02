// Find number of trailing zeroes in given n!
// https://www.codechef.com/LRNDSA01/problems/FCTRL

#include <bits/stdc++.h>

using namespace std ;

int main()
{
	long long int t ;
	cin >> t ;
	
	while( t-- )
	{
		long long int n, ans = 0, j ;
		cin >> n ;
		
		for( int j = 5 ; (n/j) > 0 ; j *= 5 )
		{
			ans = ans + (n/j) ;
		}

		
		cout << ans << "\n" ;
		
	}
	return 0 ;
}
