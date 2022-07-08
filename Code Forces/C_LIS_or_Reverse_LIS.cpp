#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    
    
    map<int,int> mp;
    for(int i=0;i<n;i++)
        mp[v[i]]++;

    int tmp = 0;

    for(auto &x:mp){
        x.second == 1 ? tmp++ : (tmp = tmp + 2);
    }

    int ans = (tmp+1)/2;
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