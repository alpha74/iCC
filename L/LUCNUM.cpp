// Lucky Number
// https://www.codechef.com/DSAPREP_01/problems/LUCNUM
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

int num2(ull n)
{
    int count = 0 ;
    
    while(n % 2 == 0)
    {
        count++ ;
        n = n / 2 ;
    }
    
    return count ;
}

void beeblebrox()
{
    /*
        1 = 1           y
        2 = 2           n
        3 = 2           y
        4 = 2x2         y
        6 = 2x3         n
        
        8 = 2x2x2       n
        48 = 2x2x2x2x3  y
        
    */
    
    ull n ;
    cin >> n ;
    
    if( n % 2 == 1 )
        cout << "1\n" ;
    
    else if( num2(n) %2 == 0)
        cout << "1\n" ;
    else
        cout << "0\n" ;
}
