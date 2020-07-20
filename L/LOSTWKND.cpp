// Lost weekends
// https://www.codechef.com/LTIME84B/problems/LOSTWKND
// Aman Kumar

// INSIGHT: Check sumArr*p > 120 -> Yes, else No
// Note, here we have to print Yes, not YES

/*
	INSIGHT:
		- Take sum of work hours after multiplying with p
		- If sum > 24*5, return YES, else NO
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
	int n = 5 ;
	vector<int> work(n) ;
	int p ;
	
	int sum = 0 ;
	for( int i = 0 ; i < n ; i++ )
	{
		cin >> work[i] ;
		sum = sum + work[i] ;
 	}
	cin >> p ;

	sum = sum * p ;
	
	if( sum > 120 )
		cout << "Yes\n" ;
	else
		cout << "No\n" ;
	
}
