#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;


void fun(vector<int> &v,int tmp){
    for(int i=0;i<31;i++){
       if(tmp&(1<<i))
            v[i]++;
    }
}


void solve(){
    int n,k;

    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    vector<int> res(32,0);
    for(int i=0;i<n;i++){
        fun(res,v[i]);
    }
    int ans = 0;
    // if(res[31]/n){
    //     ans=1;
    // }
    for(int i=30;i>=0;i--){
        ans *=2;
        if((n-res[i]) <=k){
            res[i] += (n-res[i]);
            k -= (n-res[i]);
            ans++;
        }   
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