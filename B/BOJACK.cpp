// What Is This, a Crossover Episode 
// https://www.codechef.com/COOK120B/problems/BOJACK
// Aman Kumar

/*
	INSIGHT:
		- Format : D times 'a' , 'k', D times 'a'
		- No. of unique substrings: D*D + D+D
		- No. of palidromic substrings : D*(D+1)/2 + D*(D+1)/2
*/

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

void func() ;

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	int t ;
	cin >> t ;
	
	while( t-- )
	{
		func() ;
	}
	
	return 0 ;
}


void func()
{
	int d ;
	cin >> d ;
	
	// Print length of output string
	cout << 2 * d + 1 ;
	
	// Print characters in format:
	// D times 'a' , 1 'k' , D times 'a'
	
	cout << "\n" ;
	
	for( int i = 1 ; i <= d ; i++ )
		cout << 'a' ;
	
	cout << 'k' ;
	
	for( int i = 1 ; i<= d ; i++ )
		cout << 'a' ;
	
	cout << "\n" ;
	
}
