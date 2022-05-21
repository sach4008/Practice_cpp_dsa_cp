#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;

int ans;

bool valid(vector<vector<char>>& v,int i,int j){

    int k=i,m=j;

    while(m>=0){
        if(v[i][m]=='q') return false;
        m--;
    }
    while(k>=0){
        if(v[k][j]=='q') return false;
        k--;
    }

    k=i;m=j;
    while(k>=0 && j<8){
        if(v[k][m]=='q') return false;
        k--;
        m++;
    }
    while(i>=0 && j>=0){
        if(v[i][j]=='q') return false;
        i--;
        j--;
    }

    return true;
}

void helper(vector<vector<char> >& v,int s,int q){
    
    if(s>=64){
        if(q==8) ans++;
        return;
    }
    int i=s/8;
    if(i>q) return;
    int j=s%8;

    if(v[i][j]!='*' && valid(v,i,j)){
        v[i][j] = 'q';
        helper(v,s+1,q+1);
        v[i][j] = '.';
        helper(v,s+1,q);
    }
    else helper(v,s+1,q);

    return ;
}


void solve(){
    vector<vector<char> > v(8,vector<char>(8));

    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>v[i][j];
        }
    }
    ans = 0;
    helper(v,0,0);

    cout<<ans;
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