#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    
    if(n&1){
        cout<<"NO\n";
        return;
    }
    sort(v.begin(),v.end());

    vector<int> ans(n);

    int j = 0;
    for(int i=0;i<n;i++){
        ans[i] = v[j];
        i++;
        j++;
    }
    for(int i=1;i<n;i++){
        ans[i]=v[j];
        i++;
        j++;
    }
    bool var = true;
    for(int i=1;i<n-1;i++){
        if((ans[i-1]<ans[i] && ans[i+1]<ans[i]) || (ans[i-1]>ans[i] && ans[i+1]>ans[i])){
            continue;
        }
        else{
            var = false;
            break;
        }
    }
    if(var){
        cout<<"YES\n";
        for(int i=0;i<n;i++)
            cout<<ans[i]<<" ";
        cout<<"\n";
    }
    else{
        cout<<"NO\n";
    }
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