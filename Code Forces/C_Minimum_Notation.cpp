#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    map<int,int> mp,vp;
    int n;
    string str;
    cin>>str;
    n=str.size();

    for(int i=0;i<n;i++){
        mp[str[i]-'0']++;
    }
    

    for(int i=0;i<n;i++){
        int x = (str[i] -'0');
        // cout<<x;
        int tmp;
        bool flag = true;
        for(int j=x-1;j>=0;j--){
            if(mp[j]>0){
                flag = false;
                break;
            }
        }
        mp[x]--;
        if(flag){
            vp[x]++;
        }
        else{
            vp[min(x+1,9)]++;
        }
    }
    string ans = "";

    for(auto&x:vp){
        for(int i=1;i<=x.second;i++){
            ans += (x.first + '0');
        }
    }
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