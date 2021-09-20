// https://www.codechef.com/COOK133C/problems/TYRES
// Cars and Bikes
// Aman Kumar

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

void vader()
{
    int n ;
    cin >> n ;
    
    if( n % 4 == 0 )
    	cout << "NO\n" ;
    else
    	cout << "YES\n" ;
}

int main()
{
    int t = 0 ;
    cin >> t ;
    while( t-- ) vader() ;
    return 0 ;
}
