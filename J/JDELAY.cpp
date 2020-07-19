// Judging Delay
// https://www.codechef.com/LTIME64B/problems/JDELAY
// Aman Kumar

#include<iostream>

using namespace std ;

int main()
{
	int t ;
	
	cin >> t ;
	
	while( t-- )
	{
		int n, i, count = 0 ;
		
		cin >> n ;
		
		int s[ n ], j[ n ] ;
		
		for( i = 0 ; i < n ; i++ )
		{
			cin >> s[ i ] ;
			cin >> j[ i ] ;
			
			if(( j[ i ] - s[ i ]) > 5 )
				count++ ;
		}
		
		cout << count << "\n" ;
	} 
	return 0 ;
}
