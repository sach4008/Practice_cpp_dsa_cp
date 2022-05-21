#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;

long ans;

void helper(vector<long>&v,long i,long a,long b){
    if(i==v.size()){
        ans = min(ans,abs(a-b));
        return;
    }
    helper(v,i+1,a+v[i],b);
    helper(v,i+1,a,b+v[i]);
}

void solve(){
    ans = INT_MAX;
    long n;
    cin>>n;
    vector<long> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    long a=0;
    // cout<<"s";
    helper(v,a,a,a);
    // cout<<"df";
    cout<<ans;
    return ;
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