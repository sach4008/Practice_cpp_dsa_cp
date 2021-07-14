#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;

int main()
{
	ll test=1;
	// cin>>test;

	while(test--){
		ll n,k,x;
        cin>>n>>k>>x;

        vector<ll> a(n);
        vector<ll> b(n,0);

        for(ll i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a.begin(),a.end());

        for(ll i=1;i<n;i++){
            b[i]=a[i]-a[i-1];
        }

        sort(b.begin(),b.end());

        ll cnt=1;
        ll diff=k;

        for(ll i=1;i<n;i++){
            if(b[i]<=x){
                continue;
            }
            else{
                if(diff>=0){
                    diff-=((b[i]+x-1)/x);
                    diff++;
                    if(diff<0) cnt++;
                }
                else
                    cnt++;
            }
        }

        cout<<cnt<<"\n";
	}

	return 0;
}