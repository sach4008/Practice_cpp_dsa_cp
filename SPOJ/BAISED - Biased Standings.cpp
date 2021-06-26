#include<bits/stdc++.h>

#define mod 1000000007
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int test; cin>>test;

	while(test--){

		// getln
		long long n;cin>>n;

		long long arr[n];
		string str[n];

		for(long long i=0;i<n;i++)  cin>>str[i]>>arr[i];

		sort(arr,arr+n);

		long long cnt=0;
		for(long long i=0;i<n;i++)  cnt+=abs(i+1-arr[i]);

		cout<<cnt<<"\n";
	}

	return 0;
}

