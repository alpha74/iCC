// Deputy Chef
// https://www.codechef.com/FEB19B/problems/DEPCHEF
// Aman Kumar

#include <bits/stdc++.h>

using namespace std ;

int main()
{
	int t ; 	// Number of test cases
	cin >> t ;
	
	while( t-- )
	{
		int n, i, best = 0, flag = 0 ;
		
		cin >> n ; // Input number of elements
		
		int a[ n ], d[ n ] ;
		
		for( i = 0 ; i < n ; i++ )
			cin >> a[ i ] ;
			
		for( i = 0 ; i < n ; i++ )
			cin >> d[ i ] ;
			
		i = 0 ;	
		// For first soldier
		if( d[ i ] > ( a[ i + 1 ] + a[ n - 1 ] ))	
		{
			best = i ;	
			flag = 1 ;	
		}	
			
		for( i = 1 ; i < (n-1) ; i++ )
		{
			if( d[ i ] > ( a[ i + 1 ] + a[ i - 1 ] ))
			{
				if( flag == 1 )
				{
					if( d[ i ] > d[ best ] )
					{
						best = i ;
					}
				}
				else
				{
					best = i ;
					flag = 1 ;
				}
			}	
		}
		
		// For last soldier
		if( d[ n-1 ] > ( a[ 0 ] + a[ n - 2 ] ))	
		{
			if( flag == 1 )
			{				
				if( d[ n - 1 ] > d[ best ] )
				{
					best = n - 1 ;
				}	
			}
			else
			{
				best = n-1 ;
				flag = 1 ;
			}
		}	
		
			
		if( flag == 0 )
			cout << -1 << "\n" ;
		else	
			cout << d[ best ] << "\n" ;		
					
	}
	return 0 ;
}
