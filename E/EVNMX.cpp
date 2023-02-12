// Even-Max
// https://www.codechef.com/DSAPREP_09/problems/EVNMX
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
	
    beeblebrox() ;
	
	return 0 ;
}

void beeblebrox()
{
    int n, k ;
    cin >> n >> k ;
    
    vector<int> arr(n) ;
    
    for( int i = 0 ; i < n ; i++ )
    {
        cin >> arr[i] ;
    }
    
    int start = 0, end = 0 ;
    
    queue<int> q ;
    
    for( int i = 0 ; i < n ; i++ )
    {
        //cout << "\n i: " << i << " arr: " << arr[i] ;
        if( (end-start) < k )
        {
            if( arr[i] % 2 == 0 )
                q.push( arr[i] ) ;
            end = i+1 ;
        }
        else
        {
            if(!q.empty())
                cout << q.front() << " " ;
            else
                cout << "-1 " ;
                
            if(q.front() == arr[start])
                q.pop() ;
            
            if( arr[i] % 2 == 0 )
                q.push( arr[i] ) ;
                
            start++ ;
            end = i + 1;
        }
    }
    
    if(!q.empty())
        cout << q.front() << " " ;
    else
        cout << "-1 " ;
        
    
    cout << "\n" ;
}
