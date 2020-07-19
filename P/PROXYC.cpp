// Chef and Proxy
// https://www.codechef.com/JUNE19B/problems/PROXYC
// Aman Kumar

// JUN19B
// https://www.codechef.com/JUNE19B/problems/PROXYC

#include <bits/stdc++.h>
#include<math.h> 

using namespace std ;

int main()
{
	int t ; 	// Number of test cases
	cin >> t ;
	
	while( t-- )
	{
		{
			
		int d, i ;
		int present = 0, num_proxy = -1, needed_proxy = 0 ;
		float attend_days = 0 ;
		
		cin >> d ;
		
		char days[ d ] ;			// For holding the string of days
	

		
		
		for( i = 0 ; i < d ; i++ )
		{
			cin >> days[ i ] ;
			
			if( days[ i ] == 'P' )
				present++ ;
		}
		//days[ i ] = '\0' ;
		
		
		// Calculate number of 75% days
		attend_days = ceil( (float)( 0.75 * d ) ) ;
		
		
		// Case when it is already >= 75%
		if( present >= attend_days )
			num_proxy = 0;
		
		else if( d < 5 )
			num_proxy = -1 ;
			
		else
		{
			needed_proxy = attend_days - present ;
			
			if( needed_proxy > 0 )
			{
				num_proxy = 0 ;
				for( i = 2 ; i < ( d - 2 ) ; i++ )
				{
					if( days[ i ] == 'A' && ( days[ i - 1 ] == 'P' || days[ i - 2 ] == 'P' ) && ( days[ i + 1 ] == 'P' || days[ i + 2 ] == 'P' ) )
						num_proxy++ ;
				}
				if( num_proxy < needed_proxy )
					num_proxy = -1 ;
				else
					num_proxy = needed_proxy ;
			}
			else
				num_proxy = 0 ;
		}
		
		cout << num_proxy << "\n" ;
		}
		
	}
	
	return 0 ;
}	
