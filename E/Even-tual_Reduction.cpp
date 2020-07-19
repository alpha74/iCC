// Even-tual Reduction
// https://www.codechef.com/COOK120B/problems/EVENTUAL
// Aman Kumar

/*
	INSIGHT:
		- If freqeuncy of any char is not even: Print NO
		- Else print YES
*/

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

void func() ;

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	ll t ;
	cin >> t ;
	
	while( t-- )
	{
		func() ;
	}
	
	return 0 ;
}


void func()
{
	ll len ;
	cin >> len ;
	string s ;
	cin >> s ;
	
	map<char,int> count ;
	
	for( int i = 0 ; i < len ; i++ )
	{
		auto iter = count.find( s[i] ) ;
		
		if( iter == count.end() )
		{
			count.insert( pair<char,int>( s[i], 1 ) ) ;
		}
		else
			iter -> second = iter -> second + 1 ;
	}
	
	bool alleven = true ;
	
	auto iter = count.begin() ;
	
	for( ; iter != count.end() && alleven == true ; iter++ )
	{
		if( iter -> second % 2 != 0 )
			alleven = false ;
	}
	
	if( alleven == true )
		cout << "YES\n" ;
	else
		cout << "NO\n" ;
}
