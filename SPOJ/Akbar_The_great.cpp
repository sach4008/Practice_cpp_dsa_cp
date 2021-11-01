#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;


bool dfs(vector<bool> &vis,vector<vector<int> > &roads,int pr,int st,int str){
    if(str<0){
        return false;
    }
    if(vis[st]){
        return true;
    }
    vis[st] = true;
    bool var = false;

    for(auto x:roads[st]){

        if(x!=pr && )
    }
}


void solve(){
    int n,r,m;
    cin>>n>>r>>m;

    vector<pair<int,int> > soldier(m);

    vector<vector<int> > roads(n+1);

    for(int i=0;i<r;i++){
        int a,b;
        cin>>a>>b;

        roads[a].push_back(b);
        roads[b].push_back(a);
    }

    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        soldier.push_back({a,b});
    }
    vector<bool> vis(n+1,false);

    for(int i=0;i<m;i++){
        bool var = dfs(vis,roads,-1,soldier[i].first,soldier[i].second);

        if(var){
            cout<<"NO\n";
            return ;
        }
    }
    cout<<"YES\n";
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