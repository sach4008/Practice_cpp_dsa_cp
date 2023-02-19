#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    long long ans=0,prev=0,res=0;

    for(int i=0;i<n;i++){
        ll tmp = v[i];

        if(tmp>prev){
            ans += tmp-prev;
        }
        prev = v[i];
    }
    res = ans;
    sort(v.begin(),v.end());
    ans=0,prev=0;
    for(int i=0;i<n;i++){
        ll tmp = v[i];

        if(tmp>prev){
            ans += tmp-prev;
        }
        prev = v[i];
    }
    // cout<<res<<" "
    if(res>=ans){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
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