// Camp or Not
// https://www.codechef.com/problems/CAMPON
// Aman Kumar

#include<bits/stdc++.h>

using namespace std ;

int main()
{
	int t ;
	
	cin >> t ;
	
	while( t-- )
	{
		int dnum, i, j ;
		
		cin >> dnum ;
		
		int d[ dnum ], p[ dnum ] ;
		
		for( i = 0 ; i < dnum ; i++ )
		{
			cin >> d[ i ] >> p[ i ] ;
		}
		
		int q ;
		
		cin >> q ;
		
		int dead[ q ], req[ q ], sum = 0 ;
		
		for( j = 0 ; j < q ; j++ )
		{
			cin >> dead[ j ] >> req[ j ] ;
			
			sum = 0 ;
			
			for( i = 0 ; i < dnum ; i++ )
			{
				if( dead[ j ] >= d[ i ] )
					sum = sum + p[ i ] ; 	// Summing total problems
			}
			
			if( sum >= req[ j ] )
				cout << "Go Camp\n" ;
			else
				cout << "Go Sleep\n" ;
		}
		
		
	}
	
	return 0 ;
}
