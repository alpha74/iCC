// Take Turns
// https://www.codechef.com/problems/KJCP3
// Aman Kumar

// Codechef : KJCP3

#include<iostream>
#include<set>

using namespace std ;

int main()
{
	unsigned int t ;
	
	cin >> t ;
	
	while( t-- )
	{
		set<int> S1, S2 ;
	
		unsigned int n, i ;
		long int num ;
		
		cin >> n ;
		
		// Inputting list
		
		for( i = 0 ; i < n ; i ++ )
		{
				cin >> num ;
				S1.insert( num ) ;
		}
		for( i = 0 ; i < n ; i++ )
		{
			cin >> num ;
			S2.insert( num ) ;
		}
		
		// Displaying list
		
		auto it1 = S1.begin() ;
		auto it2 = S2.begin() ;
		
		for( ; it1 != S1.end() ; it1++, it2++ )
		{
			cout << *it1 << ' ' << *it2 << ' ' ;
		}
		
		cout << "\n" ;
	}
	
	return 0 ;
}
