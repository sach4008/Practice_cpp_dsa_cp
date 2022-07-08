#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n;cin>>n;
    vector<int> v(n);
    int sum = 0;

    for(int i=0;i<n;i++){
        cin>>v[i];
        sum += v[i];
    }
    bool var = false;
    for(int i=0;i<n;i++){
        int tmp = sum - v[i];
        if(((double)tmp/(n-1))==(double)v[i]){
            var = true;
            break;
        }
    }
    if(var)
        cout<<"YES\n";
    else   
        cout<<"NO\n";

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