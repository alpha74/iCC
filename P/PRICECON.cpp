// Chef and Price Control
// https://www.codechef.com/JUNE20B/problems/PRICECON
// Aman Kumar

#include <bits/stdc++.h>

using namespace std ;

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	int t ;
	cin >> t ;
	
	while( t-- )
	{
		int n = 0, k = 0 ;
		cin >> n >> k ;
		
		vector<int> arr ;
		
		int sum1 = 0, sum2 = 0 ;
		
		for( int i = 0; i < n ; i++ )
		{
			int temp ;
			cin >> temp ;
			arr.push_back( temp ) ;
			
			sum1 += temp ;
			
			if( temp > k )
				sum2 += k ;
			else
				sum2 += temp ;
		}
		
		cout << sum1 - sum2 << "\n" ;
	}
	return 0 ;
}
