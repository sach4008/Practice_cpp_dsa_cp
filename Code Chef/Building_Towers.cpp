#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;



void solve(){
    ll x,m;
    cin>>x>>m;

    
    
    map<int,pair<int,int> > st;
    st.insert({1,{0,0}});

    ll rem=1,tower=0,cnt=0;
    ll i;
    for(i=1;i<=m;i++){

        if(rem>=x-tower){
            rem -= x-tower;
            tower = 0;
            rem += x;
            cnt++;
            if(st.find(rem)!=st.end()){
                break;
            }
            else st.insert({rem,{i,cnt}});
        }
        else{
            tower += rem;
            rem = tower;
        }        
    }
    auto g = st[rem];
    cnt = g.second + (m-g.first)/(i-g.first);
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