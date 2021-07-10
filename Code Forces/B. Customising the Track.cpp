#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	ll test=1;
	cin>>test;

	while(test--){
		ll n;cin>>n;
		ll arr[n];
		ll sum=0;
		for(ll i=0;i<n;i++){
			cin>>arr[i];
			sum+=arr[i];
		}
		if(sum%n==0){
			cout<<0<<"\n";
		}
		else{
			ll ans=sum%n;

			ans*=(n-ans);
			cout<<ans<<"\n";
		}
	}

	return 0;
}

