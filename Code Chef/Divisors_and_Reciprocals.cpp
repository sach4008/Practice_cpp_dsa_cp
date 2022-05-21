#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;


// bool check(ll num,ll sum){
    // ll tmp = 0;
    // for(ll i=1;i*i<=num;i++){
    //     ll t = num/i;

    //     if(num%i==0){
    //         tmp += i;
    //         if(t!=i) tmp += t;
    //     }
    // }
    // if(tmp==sum) return true;
    // return false;
// }


void solve(){
    ll sum,a,b;
    cin>>sum>>a>>b;

    ll num = (sum*b)/a;

    if(num>sum){
        cout<<"-1\n";
        return;
    }

    bool var = false;
    ll tmp = 0;
    for(ll i=1;i*i<=num;i++){
        

        if(num%i==0){
            tmp += i;
            ll t = num/i;
            if(t!=i) tmp += t;
        }
    }
    if(tmp==sum) var = true;

    if(var){
        cout<<num<<"\n";
    }
    else cout<<"-1\n";

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