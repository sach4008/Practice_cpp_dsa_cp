#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    string str;
    cin>>str;

    vector<vector<int>> v(26);
    int n = str.size();
    for(int i=0;i<n;i++){
        v[str[i]-'a'].push_back(i+1);
    }

    int a = str[0]-'a';
    int b = str[n-1]-'a';
    cout<<abs(a-b)<<" ";
    if(a<=b){
        int cnt = 0;
        for(int i=a;i<=b;i++){
            cnt += v[i].size();
        }
        cout<<cnt<<"\n";
        for(int i=a;i<=b;i++){
            for(auto&x:v[i])
                cout<<x<<" ";
        }
    }
    else{
        int cnt = 0;
        for(int i=a;i>=b;i--){
            cnt += v[i].size();
        }
        cout<<cnt<<"\n";
        for(int i=a;i>=b;i--){
            for(auto&x:v[i])
                cout<<x<<" ";
        }
    }
    cout<<"\n";
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