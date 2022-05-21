#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n;
    cin>>n;
    int tmp = 0;
    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
        tmp = max(v[i],tmp);
    }
    ll ans = 0;
    for(int i=0;i<n;i++){
        ans += tmp-v[i];
    }
    cout<<ans<<"\n";
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