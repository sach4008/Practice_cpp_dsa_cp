#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int x,y;

    cin>>x>>y;

    if(x!=y) cout<<(x + y)<<"\n";
    else cout<<(2*x-1)<<"\n";

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