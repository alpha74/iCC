// Chef and Keyboard
// https://www.codechef.com/problems/CHEFKEY
// Aman Kumar

#include<bits/stdc++.h>

using namespace std ;

int main()
{
	unsigned int t ;
	
	cin >> t ;
	
	while( t-- )
	{
		unsigned int n, m, c, i, j, k, count = 0 ;
		int flag = 0 ;
		
		cin >> n >> m >> c ;
		
		for( i = 1 ; i <= n ; i++ )
		{
			j = c % i ;
			
			if( j == 0 )
			{
				k = c / i ;
				
				if( k >= 1 && k <= m )
					count++ ;			
			}
		}
		cout << count << "\n" ;
	}
	
}
