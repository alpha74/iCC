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
		for(int i = n - 1; i >= 0 && ret == -1 ; i--)
		{
			if( k % 2 && s[i] != s[0])
			{
				ret = i+1 ;
			}
			else if(!(k % 2) && s[i] == s[0])
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
