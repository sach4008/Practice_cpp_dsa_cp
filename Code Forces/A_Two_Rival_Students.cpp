#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    ll n,x,a,b;
    cin>>n>>x>>a>>b;

    ll ans = min(abs(a-b)+x,n-1);

    cout<<ans<<"\n";
    return;
}

int main()
{
    ll test=1;
    cin>>test;

    while(test--){
        solve();
    }

    return 0;
}