#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==7 || b==7 || c==7){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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