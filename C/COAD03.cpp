// Mr Thakkar want to go dream land
// https://www.codechef.com/problems/COAD03
// Aman Kumar

#include<iostream>

using namespace std ;

#define LEN 2000

int memo[ LEN ] ;

int memo_init( int ) ;
int getMinSteps( int ) ;


int main()
{
	int n = 0, t = 0;
	
	memo_init( -1 ) ;		// Initializing memo[] with -1
		
	cin >> t ;	
		
	while( t-- )
	{	
		cin >> n ;

		cout << getMinSteps( n ) << "\n" ;
	}
	return 0 ;	
}

int memo_init( int n )
{
	int i = 0 ;
	
	for ( i = 0 ; i < LEN  ; i++ )
		memo[ i ] = n ;
}

int getMinSteps( int n )
{	
	int r = 0, i = 0 ;
	
	memo[ 1 ] = 0 ;		
	
	for( i = 2 ; i <= n ; i++ )
	{
		memo[ i ] = 1 + memo[ i - 1 ] ;							// Choice n=n-1
		
		if( i % 2 == 0 )
			memo[ i ] = min( memo[ i ],  1 + memo[ i/2 ] ) ;	// Choice n=n/2		
	}
		
	return memo[ n ] ;					
}
	
