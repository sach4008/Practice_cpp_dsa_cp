#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n;
    cin>>n;

    vector<int> t(n),d(n);

    for(int i=0;i<n;i++) cin>>t[i];
    for(int i=0;i<n;i++) cin>>d[i];

    map<int,vector<int>> mp;

    bool flag = true;
    int tmp=INT_MAX;

    // cout<<"f1";

    for(int i=0;i<n;i++){
        mp[t[i]].push_back(d[i]);
        tmp = min(tmp,d[i]);
    }

    // cout<<"f1";
    
    int k = n/mp.size();

    for(auto&x:mp) sort((x.second).begin(),(x.second).end());

    // cout<<"f1";
    
    long long ans = 0;
    for(auto&x:mp){
        // cout<<x.first<<" ";
        int s = (x.second).size();
        int i = 0;
        while((s-i)>k){
            // cout<<"c";
            ans += x.second[i];
            i++;
            flag = false;
        }
        while(i<s){
            // cout<<"d";
            ans += (2LL*x.second[i]);
            i++;
        }
    }
    // cout<<"f1";
    
    if(flag){
        ans -=(ll)tmp;
    }
    cout<<ans<<"\n";

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