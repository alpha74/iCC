// Zebra Crossing
// https://www.codechef.com/problems/ZEBRA
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
	int n, k ;
	cin >> n >> k ;
		
	string s ;
	cin >> s ;
	
	int ret = -1, countch = 0 ;
	
	// Check if it is possible to make K jumps or not
	for( int i = 1 ; i < n ; i++ )
	{
		if( s[i] != s[i-1] )
			countch++ ;
	}
	
	// Yes, possible to make K jumps
	if( countch >= k )
	{
		// Check from last to get farthest block
		for(int i = n - 1; i >= 0 && ret == -1 ; i--)
		{
			// Total 4 cases
			
			// If k is odd AND ((If starting is 1 AND current is 0 ) OR ( If starting is 0 AND current is 1 ) ) 
			if( k % 2 && s[i] != s[0])
			{
				ret = i+1 ;
			}
			// If k is even AND (( If starting is 1 AND current is 1 ) OR ( If starting is 0 and current is 0 ) )
			if(!(k % 2) && s[i] == s[0])
			{
				ret = i+1 ;
			}
		}
	}
	
	cout << ret << "\n" ;

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
