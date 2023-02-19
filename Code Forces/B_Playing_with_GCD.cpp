#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define int long long
using namespace std;


int gcd (int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}


void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    vector<int> tmp(n+1,1);

    tmp[0] = v[0];
    tmp[1] = v[0];
    
    bool flag = true;

    for(int i=1;i<n;i++){
        // cout<<tmp[i]<<" ";
        tmp[i] = lcm(v[i],tmp[i]);
        tmp[i+1] *= v[i];

        if(gcd(tmp[i],tmp[i-1])!=v[i-1]){
            // cout<<gcd(tmp[i],tmp[i-1])<<v[i]<<"\n";
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
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