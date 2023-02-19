#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;


vector<int> sq;


void solve(){
    int n;
    cin>>n;
    vector<int> ans(n,-1);

    bool var = true;

    for(int i=n-1;i>=0;i--){
        if(ans[i]!=-1)
            continue;
        int tmp = upper_bound(sq.begin(),sq.end(),i)-sq.begin();
        tmp = sq[tmp]-i;

        if(ans[tmp]==-1){
            ans[tmp] = i;
            ans[i] = tmp;
            continue;
        }
        
        if((lower_bound(sq.begin(),sq.end(),i)==upper_bound(sq.begin(),sq.end(),i))||(ans[0]!=-1)){
            var = false;
            break;
        }

        if(ans[0]==-1){
            ans[0]=i;
            ans[i]=0;
        }
    }
    if(var){
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
    }
    else{
        cout<<"-1";
    }
    cout<<"\n";
    return;
}

int main()
{
    ll test=1;
    cin>>test;

    int i=0;
    while(i*i<1e6){
        sq.push_back(i*i);
        i++;
    }
    while(test--){
        solve();
    }

    return 0;
}