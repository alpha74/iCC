// Help Martha
// https://www.codechef.com/CENS2020/problems/CENS20G
// Aman Kumar

/*
	INSIGHT: See comments
*/

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int
#define ff first
#define ss second
#define MOD 1000000007

void func() ;


int main() 
{
	#ifndef DBG
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie(0) ;
	#endif
	
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
	string s ;
	cin >> s ;
	
	int x1, y1 ;
	cin >> x1 >> y1 ;
	
	int q ;
	cin >> q ;
	
	// Count the occurences of all directions
	int dir[4] = { 0 } ;
	int L = 0, R = 1, U = 2, D = 3 ;
	
  // Increment frequency
  // This is max bounds in all four directions(a rectangle)
	for( int i = 0 ; i < s.length() ; i++ )
	{
		if( s[i] == 'L' )
			dir[L]++ ;
		
		else if( s[i] == 'R' )
			dir[R]++ ;
			
		else if( s[i] == 'U' )
			dir[U]++ ;
			
		else if( s[i] == 'D' )
			dir[D]++ ;
	}
	
	while( q-- )
	{
		bool possible = true ;
		int moves = 0 ;
		
		int x2, y2 ;
		cin >> x2 >> y2 ;
		
		int dx, dy ;
		dx = ( x2-x1 ) ;
		dy = ( y2-y1 ) ;
		
		// Check for their freq of bounds
		// Right
		if( dx > 0 )
		{
			if( dx > dir[R] )
				possible = false ;
			else
			{
				moves += abs(dx) ;
			}
		}
		// Left
		else
		{
			if( abs(dx) > dir[L] )
				possible = false ;
			else
				moves += abs( dx ) ;
		}		
		
		if( possible )
		{
			// Up
			if( dy > 0 )
			{
				if( dy > dir[U] )
					possible = false ;
				else
					moves += abs( dy ) ;
			}
			// Down
			else
			{
				if( abs(dy) > dir[D] )
					possible = false ;
				else
					moves += abs(dy) ;
			}
			
		}
		
		// Print result
		if( possible == false )
			cout << "NO\n" ;
		else
		{
			cout << "YES " << moves ;
		}
		cout << "\n" ;
	}
	
}

