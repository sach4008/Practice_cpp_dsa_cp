#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define int long long

using namespace std;





void solve(){
    int n,m;
    cin>>n>>m;

    if(n>m){
        cout<<"NO\n";
        return ;
    }
    vector<int> v(n);

    int d = m/n;
    int rem = m%n;
    bool var = true;
    if(rem==0){
        for(int i=0;i<n;i++)
            v[i]=d;
        var = false;
    }
    else{
        if(n&1){
            for(int i=0;i<n;i++)
                v[i]=d;
            v[n-1] += rem;
            var = false;
        }
        else if(rem%2==0){
            for(int i=0;i<n;i++)
                v[i]=d;
            v[n-1] += rem/2;
            v[n-2] += rem/2;
            var = false;
        }
    }

    if(var){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    for(int&x:v){
        cout<<x<<" ";
    }
    cout<<"\n";
    return;
}

int32_t main()
{
    ll test=1;
    cin>>test;

    while(test--){
        solve();
    }

    return 0;
}