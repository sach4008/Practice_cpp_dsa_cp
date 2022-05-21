#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n;cin>>n;

    int a,b;
    set<int> c,d;
    
    for(int i=0;i<n;i++){
        cin>>a>>b;
        c.insert(a);
        d.insert(b);
    }

    int ans = c.size() + d.size();

    cout<<ans<<"\n";
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