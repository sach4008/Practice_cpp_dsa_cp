#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;

void solve(){
    long long a,b;
    cin>>a>>b;
    
    cout<<(int)ceil((a*1.0000*b)/3)<<"\n";
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