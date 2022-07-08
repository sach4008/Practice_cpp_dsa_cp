#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n;cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    bool var = true;
    vector<int> ans(n);
    int prev = -1;

    for(int i=n-1;i>=0;i--){
        if(v[i]==v[i-1]){
            ans[i] = i-1;
            if(prev==-1)
                prev = i;
        }
        else if(prev != -1){
            ans[i] = prev;
            prev = -1;
        }
        else{
            var = false;
            break;
        }
    }
    if(var){
        for(int i=0;i<n;i++){
            cout<<ans[i]+1<<" ";
        }
        cout<<"\n";
    }
    else{
        cout<<"-1\n";
    }
    return ;
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