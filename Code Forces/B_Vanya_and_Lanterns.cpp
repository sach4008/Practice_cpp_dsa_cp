#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;

void solve(){
    ll n,l;
    cin>>n>>l;

    vector<double> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];

    sort(v.begin(),v.end());

    double a = max(v[0]-0,l-v[n-1]);


    for(ll i=1;i<n;i++){
        a = max((v[i]-v[i-1])/2.0,a);
    }
    printf("%.10f\n",a);
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