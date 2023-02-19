#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;



int fun(vector<int>&v){
    int tmp=0,ans=INT_MAX;
    for(int &x:v){
        tmp=0;
        while(!(x&1)){
            x/=2;
            tmp++;
        }
        ans = min(ans,tmp);
    }
    return ans;
}

void solve(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    int od=0,en=0;

    for(int &x:v){
        if(x&1)
            od++;
        else
            en++;
    }

    if(od>0){
        cout<<en<<"\n";
        return;
    }
    int ans = fun(v);

    cout<<(ans+en-1)<<"\n";

    return;
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