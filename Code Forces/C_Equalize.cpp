#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n;cin>>n;
    string a,b;cin>>a>>b;

    int cnt=0;

    for(int i=0;i<n;i++){
        if(a[i]!=b[i])
            cnt++;
    }
    int tmp = 0;
    for(int i=1;i<n;i++){
        if(a[i-1]!=b[i-1] && a[i]!=b[i]){
            if(a[i-1]==b[i] && a[i]==b[i-1]){
                tmp++;
                i++;
            }
        }
    }
    cout<<cnt-tmp<<"\n";
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