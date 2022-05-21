#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;

int n;

vector<string> helper(int n){
    if(n==1) {
        return {"0","1"};
    }

    vector<string> ans;
    vector<string> tmp = helper(n-1);
    
    for(auto &x:tmp) ans.push_back("0"+x);
    reverse(tmp.begin(),tmp.end());
    for(auto &x:tmp) ans.push_back("1"+x);

    return ans;
}



void solve(){
    cin>>n;
    vector<string> ans = helper(n);

    for(auto &x:ans) cout<<x<<"\n";
}

int main()
{
    ll test=1;
    // cin>>test;

    while(test--){
        solve();
    }

    return 0;
}