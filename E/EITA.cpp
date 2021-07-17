// https://www.codechef.com/JULY21C/problems/EITA
// EITA
// Aman Kumar

#include <bits/stdc++.h>

using namespace std ;

#define ll long long int

ll vader()
{
    int d, x, y, z ;
    cin >> d >> x >> y >> z ;
    
    // Calculate work done using first strategy
    int work1 = x * 7 ;
    
    // Calculate work done using second strategy
    int work2 = (d*y) + ((7-d) * z ) ;
    
    cout << max(work1, work2) << "\n";
}

int main()
{
    int t = 0 ;
    cin >> t ;
    while( t-- ) vader() ;
    return 0 ;
}
