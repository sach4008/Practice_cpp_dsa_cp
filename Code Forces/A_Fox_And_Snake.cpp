#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    ll n,m;
    cin>>n>>m;


    bool var = false;

    for(int i=0;i<n;i++){
        if(i&1){    
            int j=0,k=1;
            if(var){
                cout<<"#";
                j=1;
                k=0;
            }
            for(;j<m-k;j++){
                cout<<".";
            }
            if(!var){
                cout<<"#";
            }
            cout<<"\n";
            var = !var;
        }
        else{
            for(int j=0;j<m;j++){
                cout<<"#";
            }
            cout<<"\n";
        }
    }
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