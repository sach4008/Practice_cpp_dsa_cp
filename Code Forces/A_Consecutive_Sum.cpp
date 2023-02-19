#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n,k;
    cin>>n>>k;

    vector<int> v(n),v1(n+1,0);
    for(int i=0;i<n;i++) cin>>v[i];

    map<int,priority_queue<int> > mp;

    for(int i=0;i<n;i++){
        mp[(i+1)%k].push(v[i]);
    }
    long long ans = 0;
    for(auto&x:mp){
        ans += x.second.top();
    }
    cout<<ans<<"\n";
    // for(int i=1;i<=n;i++) v1[i]+=v1[i-1]+v[i-1];

    // int val = INT_MIN,st=-1,en=-1;

    // for(int i=k-1;i<n;i++){
    //     if(v1[i]-v1[i-k] > val){
    //         val = v1[i]-v1[i-k];
    //         st = i-k;
    //         en = i;
    //     }
    // }
    // priority_queue<pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>>> pq;

    // for(int i=st;i<=en;i++){
    //     pq.push()
    // }
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