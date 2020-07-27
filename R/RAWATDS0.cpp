// Segments and Cities
// https://www.codechef.com/COH12020/problems/RAWATDS0
// Aman Kumar

/*
	- Find first range pair wherein exists x.
	- Move right and keep updating the max range(left)
	- Move left and keep updateing the min range(right)
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
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	//int t ;
	//cin >> t ;
	
	//while( t-- )
	{
		func() ;
	}
	
	return 0 ;
}


void func()
{
	int n, x ;
	cin >> n >> x ;
	
	vector<pair<int,int>> trans ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		int l, r ;
		cin >> l >> r ;
	
		trans.push_back( make_pair(l,r) ) ;
	}
	
	sort( trans.begin(), trans.end() ) ;
	
	int index = -1 ;
	
	// Find first pair in which x exists
	for( int i = 0 ; i < n && index == -1 ; i++ )
	{
		if( x >= trans[i].ff && x <= trans[i].ss )
			index = i ;
	}	
	
	// Min and maximum indices of cities in range
	int mint = trans[ index ].ff ;
	int maxt = trans[ index ].ss ;
	
	bool move = true ;
	int indexl = index ;
	
	// Move to right and update max right range
	while( move && indexl+1 < n )
	{
		if( trans[ indexl + 1 ].ff <= maxt )
		{
			maxt = max( maxt, trans[ indexl + 1 ].ss ) ;
			indexl++ ;
		}
		else
			move = false ;
	}
	
	move = true ;
	indexl = index ;
	
	// Move left and update min left range
	while( move && indexl > 0 )
	{
		if( trans[ indexl -1 ].ss >= mint )
		{
			mint = min( mint, trans[ indexl -1 ].ff ) ;
			indexl-- ;
		}
		else
			move = false ;
	}
	
	cout << maxt-mint+1 << "\n" ;
	
}
