#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;


ll pow(ll n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return 2;
    }

    if(n&1){
        return 2*(pow(n/2)%mod)*(pow(n/2)%mod);
    }
    return (pow(n/2)%mod)*(pow(n/2)%mod);
}


void solve(){
    ll n;
    cin>>n;
    
    cout<<(pow(n)%mod)<<"\n";
}

int main()
{
	ll test=1;
	// cin>>test;

	while(test--){
		solve();
	}

	return 0;
}