#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;

int n;

void fun(vector<int> &v,vector<pair<int,int>>& ans){
    for(int i=0;i<n-1;i++){
        if(v[i]!=v[n-1]){
            ans.push_back({i+1,n});
        }
    }
}


void solve(){
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    bool flag = true;
    for(int i=1;i<n;i++){
        if(v[i]<v[i-1]){
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"0\n";
        return;
    }


    vector<pair<int,int>> ans;
    int tmp = 0;
    if(v[0]%2 == 0){
        for(int i=1;i<n;i++){ 
            if(v[i]&1){
                ans.push_back({tmp,i+1});
                v[i] = v[tmp];
            }
            else if(v[tmp] < v[i]){
                tmp = i;
            }
        }
    }
    else{
        for(int i=1;i<n;i++){ 
            if(!(v[i]&1)){
                ans.push_back({tmp,i+1});
                v[i] = v[tmp];
            }
            else if(v[tmp] < v[i]){
                tmp = i;
            }
        }
    }
    fun(v,ans);

    cout<<ans.size()<<"\n";

    for(auto&x:ans){
        cout<<x.first<<" "<<x.second<<"\n";
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