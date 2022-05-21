#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    int a=INT_MIN,b=INT_MIN;

    bool var = false;
    for(int i=0;i<n;i++){
        if(v[i]%2==0){
            if(v[i]<a) var = true;
            a = max(v[i],a);
        }
        else {
            if(v[i]<b) var = true;
            b = max(b,v[i]);
        }
    }

    if(!var) cout<<"YES\n";
    else cout<<"NO\n";

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