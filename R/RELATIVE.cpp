// RELATIVE
// https://www.codechef.com/JULY21C/problems/RELATIVE
// Aman Kumar

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

ll vader()
{
    ll g, c ;
    cin >> g >> c ;
    ll h = ( c * c )/( 2 * g ) ;
    cout << h << "\n" ;
}

int main()
{
    int t = 0 ;
    cin >> t ;
    while( t-- ) vader() ;
    return 0 ;
}
