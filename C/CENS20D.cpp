// Priya and AND
// https://www.codechef.com/CENS2020/problems/CENS20D
// Aman Kumar

/*
	INSIGHT: Simple brute force
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
	int n ;
	cin >> n ;
	
	vector<int> arr(n) ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		cin >> arr[i] ;
	}
	
	int count = 0 ;
	
	if( n > 1 )
	{
	
		for( int i = 0 ; i < n ; i++ )
		{
			for( int j = i+1 ; j < n ; j++ )
			{
				int val = arr[i] & arr[j] ;
				
				if( val == arr[i] )
					count++ ;
			}
		}
	}
	
	cout << count << "\n" ;
}

