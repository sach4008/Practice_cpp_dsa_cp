#include<bits/stdc++.h>
 
#define mod 1000000007
using namespace std;
 
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	long long n;cin>>n;
	long long a=0,sum=0;
	for(int i=0;i<n-1;i++) {
		cin>>a;
		sum+=a;
	}
	sum=((n*(n+1)/2)-sum);
	cout<<sum<<"\n";
	return 0;
}
