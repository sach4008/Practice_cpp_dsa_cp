#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> v(m);
    for(int i=0;i<m;i++) cin>>v[i];

    long long ans = 0LL,prev = 1LL;

    for(int i=0;i<m;i++){
        if(prev<=v[i]){
            ans += v[i]-prev;
            prev = v[i];
        }
        else{
            ans += n+v[i]-prev;
            prev = v[i];
        }
    }
    cout<<ans;
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