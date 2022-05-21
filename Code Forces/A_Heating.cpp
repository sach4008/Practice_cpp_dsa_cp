#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    ll c,s;
    cin>>c>>s;

    ll d = s/c;
    ll r = s%c;

    ll ans = r*(d+1)*(d+1) + (c-r)*d*d;

    cout<<ans<<"\n";
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