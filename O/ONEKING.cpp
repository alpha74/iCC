// One Dimensional Kingdoms
// https://www.codechef.com/problems/ONEKING
// Aman Kumar


#include <bits/stdc++.h>

using namespace std ;

bool comparator( pair<int,int> p1, pair<int,int> p2 ) 
{
	if( p1.second == p2.second )
	{
        return p1.first < p2.first ;
    }

    return p1.second < p2.second ;
}

int main()
{
	int t ;
	cin >> t ;
	
	while( t-- )
	{
		int n ;
		cin >> n ;
		
		vector< pair<int,int> > kd ;
		
		for( int i = 0 ; i < n ; i++ )
		{
			int x1, x2 ;
			cin >> x1 >> x2 ;
			
			kd.push_back( make_pair( x1, x2 ) ) ;
		}
			
		sort( kd.begin(), kd.end(), comparator ) ;	
		
		
		int count = 1 ;
		
		int s = kd[0].first ;
		int e = kd[0].second ;
		
		for( int i = 1 ; i < n ; i++ )
		{
			if( kd[ i ].first <= e )
			{
				s = kd[i].first ;
				e = min( kd[ i ].second, e ) ;
			}
			else
			{
				s = kd[ i ].first ;
				e = kd[ i ].second ;
				count++ ;
			}
		}
		
		cout << count << "\n" ;
	}
	
	return 0 ;
}
