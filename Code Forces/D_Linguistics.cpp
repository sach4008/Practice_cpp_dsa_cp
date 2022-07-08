#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;



bool helper(string& s,int i,int a,int b,int c,int d,map<vector<int>,bool>& memo){
    // vector<int> tmp
    if(memo.find({i,a,b,c,d}) != memo.end())
        return memo[{i,a,b,c,d}];
    
    if(i==s.size() && a==0 && b==0 && c==0 && d==0)
        return true;
    else if (i==s.size())
        return false;
    
    bool var = false;

    if(a>0 && s[i]=='A'){
        var = var | helper(s,i+1,a-1,b,c,d,memo);
    }
    if(b>0 && s[i]=='B'){
        var = var | helper(s,i+1,a,b-1,c,d,memo);
    }
    if(i+1<s.size() && s[i]=='A' && s[i+1]=='B'){
        var = var | helper(s,i+2,a,b,c-1,d,memo);
    }
    if(i+1<s.size() && s[i]=='B' && s[i+1]=='A'){
        var = var | helper(s,i+2,a,b,c,d-1,memo);
    }
    memo[{i,a,b,c,d}] = var;

    return var;
}

void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;

    map<vector<int>,bool> memo;
    memo.insert({{0,0,0,0,0},true});

    bool var = helper(s,0,a,b,c,d,memo);

    if(var){
        cout<<"YES\n";
    }
    else{
        cout<<"No\n";
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