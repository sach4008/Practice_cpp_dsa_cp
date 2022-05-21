#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int cnt = 0;

    for(int i=1;i<n;i++){
        if(s[i]=='0'){
            if(s[i-1]=='0')
                cnt += 2;
        }
        else if(s[i]=='1'){
            if(s[i+1]=='0' && s[i-1]=='0')
                cnt++;
        }
    }

    cout<<cnt<<"\n";
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