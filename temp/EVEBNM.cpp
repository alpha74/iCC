// https://www.codechef.com/JUNE20B/problems/EVENM

#include <bits/stdc++.h>

using namespace std ;

void getSpiral( vector<vector<int>> &arr, int n )
{
	int i = 0 ;
	
	int row = 0, col = 0 ;	// row: starting index of row;  col : starting index of col
	int m = n, val = 1 ; 	// m rows and n cols
  
  	// Traverse the array in clockwise-spiral and set the val
    while ( row < m && col < n ) 
	{ 
        // Last of remaining rows
        for ( i = col ; i < n; i++ )
			arr[ row ][i] = val++ ;
        
        row++; 
  
        // Last of remaining columns
        for ( i = row ; i < m ; i++ )
        	arr[ i ][ n-1 ] = val++ ; 
            
        n--; 
  
        // Last row from remaining rows
        if ( row < m ) 
		{ 
            for ( i = n - 1; i >= col ; i-- ) 
				arr[ m-1 ][ i ] = val++ ;
                
            m--; 
        } 
  
        // First of remaining columns
        if ( col < n ) 
		{ 
            for ( i = m - 1; i >= row ; i-- )
            	arr[ i ][ col ] = val++ ; 
                
            col++ ;
        } 
    }
}

int main()
{
	ios_base::sync_with_stdio( 0 ) ;
	cin.tie( 0 ) ;
	
	int t ;
	cin >> t ;
	
	while( t-- )
	{
		int n ;
		cin >> n ;
		
		vector<vector<int>> arr( n, vector<int> ( n,0) ) ;
		
		getSpiral( arr, n ) ;
		
		for( int i = 0 ; i < n ; i++ )
		{
			cout << "\n" ;
			for( int j = 0 ; j < n ; j++ )
				cout << arr[i][j] << " " ;
		}
		cout << "\n" ;
	}
	return 0 ;
}
