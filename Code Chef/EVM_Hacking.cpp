#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int p,q,r;
    cin>>p>>q>>r;

    int tmp = floor((p+q+r)/2.0);

    if((a+b+r>tmp)||(a+q+c>tmp)||(p+b+c>tmp)){
        cout<<"YES\n";
    }
    else cout<<"NO\n";

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