#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    ll a,b;
    cin>>a>>b;
    ll ans=0;
    a=abs(a-b);

    ans+=a/5;
    a%=5;
    ans+=a/2;
    a%=2;
    ans+=a;
    
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