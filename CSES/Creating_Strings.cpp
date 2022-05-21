#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;

set<string> st;
int len;

void helper(string &str,vector<bool>&v,string& tmp){

    if(tmp.size()==len){
        st.insert(tmp);
        return;
    }
    for(int i=0;i<len;i++){
        if(!v[i]){
            tmp += str[i];
            v[i] = true;
            helper(str,v,tmp);
            tmp.pop_back();
            v[i] = false;
        }
    }
}

void solve(){
    string str,tmp;
    cin>>str;

    len = str.size();
    vector<bool> v(len,false);

    helper(str,v,tmp);

    cout<<st.size()<<endl;
    for(auto x:st) cout<<x<<endl;

    return ;
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