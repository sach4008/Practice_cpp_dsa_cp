#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;


int check(vector<int> &v,vector<int>& tm,int n){
    int ant=0;
    for(int i=0;i<n;i++){
        if(v[i]!=tm[i]) ant++;
    }
    return ant;
}


void solve(){
    int n,m,k;
    cin>>n>>m>>k;

    vector<int> v(m);
    int f;

    for(auto &x:v)cin>>x;
    cin>>f;

    vector<int> fr(n,0);

    int i=0;
    while(f>0){
        fr[i] = f%2;
        f/=2;
        i++;
    }
    int ans = 0;
    for(i = 0;i<m;i++){
        vector<int> tm(n,0);
        f=v[i];
        int j=0;
        while(f>0){
            tm[j] = f%2;
            f/=2;
            j++;
        }
        int tmp = check(fr,tm,n);
        // cout<<tmp<<" ";
        if(tmp<=k) ans++;
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