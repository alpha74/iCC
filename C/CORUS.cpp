// Isolation Centres
// https://www.codechef.com/MAY20B/problems/CORUS
// Aman Kumar

/*
	INSIGHT: 
		- See code
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

ll digit_sum( int n )
{
	ll sum = 0 ;
	
	while( n > 0 )
	{
		sum += (n%10) ;
		n /= 10 ;
	}
	return sum ;
}

void func()
{
	int n, q ;
	cin >> n >> q ;
	
	string s ;
	cin >> s ;
	
	map<char,int> freq ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		auto iter = freq.find( s[i] ) ;
		
		if( iter == freq.end() )
			freq[ s[i] ] = 1 ;
		else
			freq[ s[i] ]++ ;
	}
	
	while( q-- )
	{
		int pending = 0 ;
		int l ;
		cin >> l ;
		
		auto iter = freq.begin() ;
		
		for( ; iter != freq.end() ; iter++ )
		{
			int left = iter->second - l ;
			
			if( left > 0 )
				pending += left ;
		}
		
		cout << pending << "\n" ;
	}
	
	
	
}
