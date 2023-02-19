#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;



void solve(){
    int n,x,y;
    cin>>n>>x>>y;

    if((x!=0 && y!=0) || (x==0 && y==0)){
        cout<<"-1\n";
        return;
    }
    if(x==0) swap(x,y);
    if((n-1)%x !=0){
        cout<<"-1\n";
        return;
    }

    int cnt = 1,won=1;
    vector<int> ans(n-1);
    ans[0]=1;

    for(int i=3;i<=n;i++){
        if(cnt<x){
            cnt++;
        }
        else{
            won = i;
            cnt = 1;
        }
        ans[i-2] = won;
    }
    // for(auto&x:ans) cout<<x<<" ";
    // cout<<"\n";

    if(cnt<x){
        cout<<"-1\n";
        return;
    }
    for(auto&x:ans) cout<<x<<" ";
    cout<<"\n";
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