// Hard Cash
// https://www.codechef.com/FEB20B/problems/CASH
// Aman Kumar

#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int n,k,i,j,t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		long long int ar[n],sum;
		sum=0;
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
			sum+=ar[i];
		}
		cout<<sum%k<<"\n";
	}
	return 0;
}
