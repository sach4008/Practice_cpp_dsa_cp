#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> v1(n),v2(m);

    for(int i=0;i<n;i++) cin>>v1[i];
    for(int i=0;i<m;i++) cin>>v2[i];
    
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    int cnt=0;

    int a=0,b=0;

    while(a<n&&b<m){
        if(abs(v1[a]-v2[b])<=k) {cnt++;a++;b++;}
        else if(v1[a]>v2[b]) b++;
        else a++;
    }

    cout<<cnt;
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