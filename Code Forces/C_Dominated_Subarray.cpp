#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++) cin>>v[i];

    map<int,int> mp;
    int ans = INT_MAX;

    for(int i =0;i<n;i++){
        if(mp.find(v[i]) == mp.end()){
            mp[v[i]] = i;
            continue;
        }
        ans = min(ans,i-mp[v[i]]+1);
        mp[v[i]] = i;
    }
    cout<<(ans==INT_MAX?-1:ans)<<"\n";
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