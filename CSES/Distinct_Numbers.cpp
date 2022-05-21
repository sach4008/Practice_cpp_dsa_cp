#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n;cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++) cin>>v[i];

    sort(v.begin(),v.end());

    int cnt = 1;

    for(int i=1;i<n;i++){
        if(v[i]!=v[i-1]) cnt++;
    }
    cout<<cnt;
    return;
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