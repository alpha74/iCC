// Necklace
// https://www.codechef.com/DSAPREP_09/problems/NEC
// Aman Kumar

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int
#define ull unsigned long long int

void beeblebrox() ;

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	int t ;
	cin >> t ;
	
	while( t-- )  beeblebrox() ;
	
	return 0 ;
}

void beeblebrox()
{
    int n ;
    cin >> n ;
    
    int k ;
    cin >> k ;
    
    queue<int> q ;
    
    for( int i = 0 ; i < n ; i++ )
    {
        int temp ;
        cin >> temp ;
        
        q.push(temp) ;
    }
    
    k = k % q.size() ;
    
    while(k--)
    {
        int front = q.front();
        q.pop();
        q.push(front) ;
    }
    
    while(!q.empty())
    {
        int front = q.front() ;
        cout << front << " " ;
        q.pop() ;
    }
    cout << "\n" ;
}
