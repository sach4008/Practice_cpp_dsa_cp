#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];

    int cnt = 0;
    int ele = INT_MIN;

    for(int i=0;i<n;i++){
        if(v[i]<ele){
            cnt++;
            ele = INT_MIN;
        }
        else{
            ele = max(ele,v[i]);
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