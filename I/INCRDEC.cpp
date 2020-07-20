// Increasing Decreasing
// https://www.codechef.com/LTIME85B/problems/INCRDEC
// Aman Kumar

// INSIGHT: See all comments

/*
	INSIGHT:
		- 
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
	int n ;
	cin >> n ;
	
	vector<int> arr(n) ;
	vector<int> res(n) ;
	
	for( int i = 0 ; i < n ; i++ )
	{
		cin >> arr[i] ;
	}
	
	bool ans = true ;
	
	// If n=1, ans is YES
	if( n == 1 )
	{
		ans = true ;
		res = arr ;
	}
	
	// If n=2, ans is YES if both are uniq elements, else NO
	else if( n == 2 )
	{
		if( arr[0] != arr[1] ) 
		{
			ans = true ;
			res = arr ;
		}
		else
			ans = false ;
	}
	
	// If n > 3
	else
	{
		sort( arr.begin(), arr.end() ) ;
		
		// If the largest element occurs 2 times, ans is NO
		if( arr[n-1] == arr[n-2] ) 
			ans = false ;
		
		else
		{
			// Find freq of each element
			map<int,int> uniq ;
			
			for( int i = 0 ; i < n && ans == true ; i++ )
			{
				auto iter = uniq.find( arr[i] ) ;
				
				if( iter != uniq.end() )
					iter -> second = iter -> second + 1 ;
				else
					uniq.insert( pair<int,int>( arr[i], 1) ) ;
			}
			
			bool allfreq1 = true ;
			
			// Check if an element occurs more than two times
			// If elements occur 1 time only, ans is YES, return sorted array
			if( ans == true )
			{
				auto iter = uniq.begin() ;
				
				for( ; iter != uniq.end() && ans == true ; iter++ )
				{
					if( iter -> second > 2 )
						ans = false ;
						
					if( iter -> second > 1 )
						allfreq1 = false ;	
				}
			}
			
			// Generate the array: final case
			if( ans == true )
			{
				// If one or more elements occur more than 1 times.
				/*
					- curr = middle= n/2
					- Start from largest number, and set is as middle in res array
					- Then, we set curr = curr-1, then curr = curr +2
					- Here, we are bouncing back and forth and setting the elements
				*/
				if( allfreq1 == false )
				{
					int p = n/2 ;
					int q = n-1 ;
					
					bool turn = 0 ;
					
					res[p] = arr[q] ;
					q-- ;
					
					for( int i = 1 ; i < n ; i++ )
					{
						// Bouncing right
						if( turn == 1 )
						{
							p = p + i ;
							turn = 0 ;
						}
						// Bounce left
						else
						{
							p = p - i ;
							turn = 1 ;
						}
							
						res[p] = arr[q] ;
						q-- ;
					}
					
				}
				// Else return sorted array
				else
				{
					ans = true ;
					res = arr ;
				}
			}
		}
	}
	
	if( ans == false )
		cout << "NO\n" ;
	else
	{
		cout << "YES\n" ;
		
		for( int i = 0 ; i < n ; i++ )
			cout << res[i] << " " ;
		
		cout << "\n" ;
	}
	
	
}
