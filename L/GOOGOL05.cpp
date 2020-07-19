// Laboratories
// https://www.codechef.com/problems/GOOGOL05
// Aman Kumar

// Codechef : GOOGOL05

#include<iostream>
#include<map>

using namespace std ;

int main()
{
	unsigned int n, i ;
	
	cin >> n ;
	
	map<string, int> lab ;
	
	char list[ n ][ 102 ] ;
	
	for( i = 0 ; i < n ; i++ )
	{
		cin >> list[ i ] ;
	}
	
	for( string s : list )
	{
		lab[ s ]++ ;
	}
	
	for( auto it = lab.begin() ; it != lab.end() ; it++ )
	{
		cout << ( it -> first ).c_str() << " " << it -> second << endl ;
	}
	
	return 0 ;
}
