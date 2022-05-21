#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    ll a,b;
    cin>>a>>b;

    if(max(a,b)>2*min(a,b)){
        cout<<"NO\n";
    }
    else if(max(a,b)==2*min(a,b)){
        cout<<"YES\n";
    }
    else{
        if((a+b)%3 == 0){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }
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