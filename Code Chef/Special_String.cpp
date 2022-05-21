#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int m;cin>>m;
    string str = "";
    for(int i=0;i<m;i++){
        str += ('a'+i%26);
    }

    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s[i-1]==str[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }
        
    if(dp[n][m] == m){
        cout<<n-m<<"\n";
        return;
    }
    cout<<"-1\n";
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