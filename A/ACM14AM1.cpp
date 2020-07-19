// Mangalyan-2
// https://www.codechef.com/problems/ACM14AM1
// Aman Kumar

#include<bits/stdc++.h>

using namespace std ;

int main()
{
	unsigned int t ;
	
	cin >> t ;
	
	while( t-- )
	{
		int A[ 1002 ] ;
		unsigned int n, i, p, count = 0 ;
		
		cin >> n >> p ;
		
		for( i = 0 ; i < n ; i++ )
		{
			cin >> A[ i ] ;
			
			if( A[ i ] >= p )
				count++ ;
		}
		
		cout << count << "\n" ;
	}
	
}
