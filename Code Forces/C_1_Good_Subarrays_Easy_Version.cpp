#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define int long long

using namespace std;





void solve(){
    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int tmp = 0;
    int ans = 0;

    for(int i=0;i<n;i++){
        if(v[i]<=tmp) tmp=v[i];
        else tmp++;
        // tmp++;
        ans += tmp;
    }
    cout<<ans<<"\n";
}

int32_t main()
{
    ll test=1;
    cin>>test;

    while(test--){
        solve();
    }

    return 0;
}