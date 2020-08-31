// Chef Learns BST
// https://www.codechef.com/ENAU2020/problems/ECAUG204
// Aman Kumar

/*
	INSIGHT: Check if all values are unique.
		
*/

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int
#define ff first
#define ss second
#define MOD 1000000007

#define FIO
#define DBGs

void darthvader() ;

int main()
{
	#ifdef FIO
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie(0) ;
	#endif
	
	int t = 1 ;
	cin >> t ; 
	
	while(t--) darthvader() ;
	
	return 0 ;
}

void darthvader()
{
	int n ;
	cin >> n ;
	
	vector<int> arr(n);
	
	for( int i = 0 ; i < n ; i++ )
	{
		cin >> arr[i] ;

	}
	
	bool ret = true ;
	
	if( ret )
	{
		// Check if all are unique
		map<int,int> freq ;
		
		for( int i = 0 ; i < n && ret == true ; i++ )
		{
			freq[ arr[i] ]++ ;
			
			if( freq[ arr[i] ] > 1 )
				ret = false ;
		}
		
		if( ret )
			cout << "Yes\n" ;
		else
			cout << "No\n" ;
	}
	else
		cout << "No\n" ;
	
}

