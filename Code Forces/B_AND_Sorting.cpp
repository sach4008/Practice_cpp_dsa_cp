#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int tmp;
    for(int i=0;i<n;i++){
        if(v[i]!=i){
            tmp = i;
            break;
        }
    }

    for(int i=0;i<n;i++){
        if(v[i]!=i){
            tmp = (tmp&v[i]);
        }
    }
    cout<<tmp<<"\n";
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