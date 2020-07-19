// IPL and RCB
// https://www.codechef.com/problems/CLIPLX
// Aman Kumar

#include <bits/stdc++.h>

using namespace std ;

int main()
{
	int t ; 	// Number of test cases
	cin >> t ;
	
	while( t-- )
	{
		int x, y, temp, match = 0 ;
		
		cin >> x >> y ;
		
		if( x == 0 )
			match = 0 ;
		
		else if( x <= y )
			match = 0 ;
			
		else
		{
			temp = x % y ;
			
			if( temp != 0 )
				match = temp ;
			else
				match = y ;	
		}	
		
		cout << match << "\n" ;
	}
}
