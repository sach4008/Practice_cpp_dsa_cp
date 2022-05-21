#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n;cin>>n;

    int v[n];
    for(int i=0;i<n;i++) cin>>v[i];

    int k=0;
    while(k<n && v[k]==k+1){
        k++;
    }
    int j=k;
    while(j<n && v[j]!=k+1){
        j++;
    }
    // cout<<j<<k<<"\n";
    reverse(v+k,v+j+1);

    for(int i=0;i<n;i++) cout<<v[i]<<" ";
    cout<<"\n";
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