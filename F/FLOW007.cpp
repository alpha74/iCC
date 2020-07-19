// Reverse the Number
// https://www.codechef.com/LRNDSA01/problems/FLOW007
// Aman Kumar

#include <bits/stdc++.h>

using namespace std ;

int main()
{
  int t ;
  cin >> t ; 
  
  while( t-- )
  {
    long long int n, num = 0 ;
    cin >> n ;
    
    while( n > 0 )
    {
      num = num*10 + n%10 ;
      n /= 10 ;
    }
    cout << num << "\n" ;
   }
  
}
