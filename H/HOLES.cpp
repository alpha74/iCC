// Holes in the Text
// https://www.codechef.com/problems/HOLES
// Aman Kumar

#include<bits/stdc++.h>

using namespace std ;

int main()
{
	unsigned int t ;
	
	cin >> t ;
	
	while( t-- )
	{
		char str[ 104 ] ;
		int i, count = 0 ;
		
		cin >> str ;
		
		for( i = 0 ; str[ i ] != '\0' ; i++ )
		{
			if( str[i] == 'A' || str[i] == 'B' || str[i] == 'D' || str[i] == 'O' || str[i] == 'P' || str[i] == 'Q' || str[i] == 'R' )
			{
				count++ ;
				
				if( str[i] == 'B' )
					count++ ;
			}
		}
		
		cout << count << "\n" ;
	}
	
}
