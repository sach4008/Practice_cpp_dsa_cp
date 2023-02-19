#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n;cin>>n;
    string tmp = "a";

    for(int i=1;i<n;i++){
        string str = "";
        str += ('a'+i);
        for(int j=0;j<tmp.size();j++){
            str += tmp[j];
            str += ('a'+i);
        }
        tmp = str;
    }
    cout<<tmp<<"\n";
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