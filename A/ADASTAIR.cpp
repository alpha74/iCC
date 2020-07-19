// Ada and Staircase
// https://www.codechef.com/COOK99B/problems/ADASTAIR
// Aman Kumar

// ADa Staircase

#include<bits/stdc++.h>

using namespace std;

int main()
{
  unsigned int test ;
  cin >> test ;
  
  while(test--)
   {
   	  int n, k ;
   	
      cin >> n >> k ;
      int op = 0, i ;
      int ar[n];
      int d=0;
      
	  // Inputting 
	  for( i = 0 ; i < n ; i++ )
      {
      	cin>>ar[i];
	  }
	  
      for( i = 1 ; i < n ; i++ )
	    {
	      int kl = ar[i] - ar[i-1] ;
	      if( kl > k )
	    	{
	          d = kl % k ;
	          if(d==0)          
	              op=(op+kl/k)-1;
	          else
	              op=op+kl/k;
	        }
	    }
	    if(ar[0]>k)
	    {
	      op+=ar[0]/k;
	      d=ar[0]%k;
	    
		  if(d==0)
	    	op = op - 1 ;    
	    }
	    
		cout<<op<< "\n" ;
    }
  
}
