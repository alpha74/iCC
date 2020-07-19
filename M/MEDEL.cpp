// Medel
// https://www.codechef.com/problems/MDL
// Aman Kumar

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t ;
    cin >> t ;
    
    while( t-- )
    {
        int n ;
        cin >> n ;
        
        vector<int> num ;
        int smallest_index = 0 ;
        int largest_index = 0 ;
        
        // Input the array of numbers
        for( int i = 0 ; i < n ; i++ )
        {
            int temp ;
            cin >> temp ;
            num.push_back( temp ) ;
            
            if( i > 0 )
            {
                if( temp > num[ largest_index ])
                    largest_index = i ;
                    
                if( temp < num[ smallest_index ])
                    smallest_index = i ;
            }
        }
        
        if( smallest_index < largest_index )
            cout << num[ smallest_index ] << " " << num[ largest_index ] << "\n" ;
        else
            cout << num[ largest_index ] << " " << num[ smallest_index ] << "\n";
    }
	
	return 0;
}
