// Binary Nim
// https://www.codechef.com/problems/BINIM
// Aman Kumar

// Binary Nim 

#include<bits/stdc++.h>

using namespace std ;

#define DEE "Dee"
#define DUM "Dum"

int main()
{	
	unsigned int t ;
	
	cin >> t ;
	
	while( t-- )
	{
		unsigned int n, i, j, count1 = 0, count0 = 0 ;
		char player[ 4 ] ;
		
		cin >> n >> player ;
		
		char stk[ n ][ 51 ] ;
		
		for( i = 0 ; i < n ; i++ )
		{
			cin >> stk[ i ] ;
			
			for( j = 0 ; stk[ i ][ j ] != '\0' ; j++ )
			{
				if( stk[ i ][ 0 ] == '0' && stk[ i ][ j ] == '0' )
					count0++ ;
				
				if( stk[ i ][ 0 ] == '1' && stk[ i ][ j ] == '1' )
					count1++ ;
			}
		}
		
		if( !strcmp( player, DEE ) ) 
		{
			if( count0 > count1 )
				cout << DEE << "\n" ;
			else
				cout << DUM << "\n" ;
		}
		else
		{
			if( count1 > count0 )
				cout << DUM << "\n" ;
			else
				cout << DEE << "\n" ;			
		}
	
	}
}
