#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    long long n,m;
    cin>>n>>m;

    ll a = n/m;
    ll b = n%m;

    ll mi = a*(a-1)/2 * (m-b) + (a+1)*a/2 * b;
    ll ma = (n-m+1)*(n-m)/2;

    cout<<mi<<" "<<ma;
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