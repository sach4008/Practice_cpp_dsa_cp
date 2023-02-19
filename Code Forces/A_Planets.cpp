#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n,c;
    cin>>n>>c;

    map<int,int> mp;
    long long ans=0;

    for(int i=0;i<n;i++){
        int x;cin>>x;
        mp[x]++;
    }

    for(auto&x:mp){
        ans += min(x.second,c);
    }
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