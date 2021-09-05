#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll k;
    cin>>k;

    for(ll n=1;n<=k;n++){
        ll tpos = (n*n)*(n*n-1)/2;
        ll apos = (n-1)*(n-2)*4;

        cout<< tpos - apos <<"\n";
    }

    return 0;
}