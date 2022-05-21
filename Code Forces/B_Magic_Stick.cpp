#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;


void solve(){
    ll x,y;
    cin>>x>>y;
    
    if(x==1 && y>1) cout<<"NO\n";
    else if((x==2||x==3)&&y>3) cout<<"NO\n";
    else cout<<"YES\n";
    
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