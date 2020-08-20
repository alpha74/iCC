

// Smallest KMP
// https://www.codechef.com/AUG20B/problems/SKMP
// Aman Kumar

/*
	INSIGHT: 
		- See comments
*/

#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define ff first
#define ss second
#define MOD 1000000007

void func() ;


int main() 
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie(0) ;
	
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
	string s, p ;
	cin >> s >> p ;
	
	// Create a vector of chars 
	vector<char> cs ;
	map<char,int> freq ;
	
	// Create map of chars
	for( int i = 0 ; i < s.length() ; i++ )
	{
		cs.push_back( s[i] ) ;
		
		auto iter = freq.find( s[i] ) ;
		
		if( iter != freq.end() )
			iter -> second = iter -> second + 1 ;
		else
			freq[ s[i] ] = 1 ;	
 	}
 	
 	// Sort the vector cs
 	sort( cs.begin(), cs.end() ) ;
	
	// Decrement number of occurences of chars in p from cs
	for( int j = 0 ; j < p.length() ; j++ )
	{
		freq[ p[j] ]-- ;
	}
	
	char sec = p[0] ;
	// Find first char in pattern which is not equal to p[0]
	for( int j = 1 ; j < p.length() && sec == p[0] ; j++ )
	{
		if( p[j] != sec )
			sec = p[j] ;
	}
	
	int i = 0 ;
	
	// If sec char is >= p[0], the pattern will be printed first,
	if( sec >= p[0] )
	{
		while( cs[i] <= p[0] && i < cs.size() )
		{
			if( freq[ cs[i] ] > 0 )
			{
				cout << cs[i] ;
				freq[ cs[i] ]-- ;
			}
			
			i++ ;
		}
	}
	// Else, print p after all occurences of p[0]
	else
	{
		while( cs[i] < p[0] && i < cs.size() )
		{
			if( freq[ cs[i] ] > 0 )
			{
				cout << cs[i] ;
				freq[ cs[i] ]-- ;
			}
			
			i++ ;
		}
	}
	
	
	
	for( int j = 0 ; j < p.length() ; j++ )
	{
		cout << p[j] ;
	}
	for( int j = 0 ; j < cs.size() ; j++ )
	{
		if( freq[ cs[j] ] > 0 )
		{
			cout << cs[j] ;
			freq[ cs[j] ]-- ; 
		}
	}
	
	cout << "\n" ;	
}




// Smallest KMP
// https://www.codechef.com/AUG20B/problems/SKMP
// Aman Kumar

/*
	INSIGHT: 
		- See comments
*/

#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define ff first
#define ss second
#define MOD 1000000007

void func() ;


int main() 
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie(0) ;
	
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
	string s, p ;
	cin >> s >> p ;
	
	// Create a vector of chars 
	vector<char> cs ;
	map<char,int> freq ;
	
	// Create map of chars
	for( int i = 0 ; i < s.length() ; i++ )
	{
		cs.push_back( s[i] ) ;
		
		auto iter = freq.find( s[i] ) ;
		
		if( iter != freq.end() )
			iter -> second = iter -> second + 1 ;
		else
			freq[ s[i] ] = 1 ;	
 	}
 	
 	// Sort the vector cs
 	sort( cs.begin(), cs.end() ) ;
	
	// Decrement number of occurences of chars in p from cs
	for( int j = 0 ; j < p.length() ; j++ )
	{
		freq[ p[j] ]-- ;
	}
	
	char sec = p[0] ;
	// Find first char in pattern which is not equal to p[0]
	for( int j = 1 ; j < p.length() && sec == p[0] ; j++ )
	{
		if( p[j] != sec )
			sec = p[j] ;
	}
	
	int i = 0 ;
	
	// If sec char is >= p[0], the pattern will be printed first,
	if( sec >= p[0] )
	{
		while( cs[i] <= p[0] && i < cs.size() )
		{
			if( freq[ cs[i] ] > 0 )
			{
				cout << cs[i] ;
				freq[ cs[i] ]-- ;
			}
			
			i++ ;
		}
	}
	// Else, print p after all occurences of p[0]
	else
	{
		while( cs[i] < p[0] && i < cs.size() )
		{
			if( freq[ cs[i] ] > 0 )
			{
				cout << cs[i] ;
				freq[ cs[i] ]-- ;
			}
			
			i++ ;
		}
	}
	
	
	
	for( int j = 0 ; j < p.length() ; j++ )
	{
		cout << p[j] ;
	}
	for( int j = 0 ; j < cs.size() ; j++ )
	{
		if( freq[ cs[j] ] > 0 )
		{
			cout << cs[j] ;
			freq[ cs[j] ]-- ; 
		}
	}
	
	cout << "\n" ;	
}



/*

1
abcdeabcde
bded
aabbdedcce

1
aaabb
ba
aabab

1
aaabb
ab
aaabb

1
aaaabbbbcccc
bbccaa
aabbbbccaacc

1
assdwfesdc
sdfesd
acsdfesdsw


*/

