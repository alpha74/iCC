// Adjacency Hatred
// https://www.codechef.com/COOK133B/problems/ADJHATE
// Aman Kumar


#include <bits/stdc++.h>

using namespace std ;

#define ll long long int
#define ff first
#define ss second
#define MOD 1000000007

#define FIO

void generalkenobi()
{
	int n ;
	cin >> n ;
	
	vector<int> even, odd ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		int temp = 0 ;
		cin >> temp ;
		
		if( temp % 2 == 0 )
			even.push_back( temp ) ;
		else	
			odd.push_back( temp );
	}
	int ret = -1 ;
	if( odd.size() != 0 && odd.size() != n )
	{
		ret = 1; 
		for( int i = 0 ; i < odd.size() ; i++ )
			cout << odd[i] << " " ;
		
		for( int i = 0 ; i < even.size() ; i++ )
			cout << even[i] << " " ;
	}
	if( ret == -1 )
		cout << "-1\n" ;
}

int main()
{
	#ifdef FIO
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie(0) ;
	#endif
	
	int t ;
	cin >> t; 
	
	while(t--) generalkenobi() ;
	
	return 0 ;
}
