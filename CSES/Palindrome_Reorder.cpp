#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;


bool check(string &str,vector<int> &v,int len){
    if(len&1){
        // cout<<"S"<<(len&1)<<"\n";
        bool var = true;
        for(int i=0;i<26;i++){
            // cout<<i<<v[i]<<" ";
            if(v[i]%2==1){
                if(var) var=false;
                else return false;
            }
        }
        return true;
    }
    for(int i=0;i<26;i++){
        if(v[i]&1) return false;
    }
    return true;
}


void solve(){
    string str;
    cin>>str;
    int len = str.length();
    vector<int> v(26,0);
    for(int i=0;i<len;i++){
        v[str[i]-'A']++;
    }
    
    if(!check(str,v,len)){
        cout<<"NO SOLUTION\n";
        return;
    }
    string t = "";
    if(len&1){
        for(int i=0;i<26;i++){
            if(v[i]&1){
                t.push_back(i+'A');
            }
        }
    }
    string a="",b;
    for(int i=0;i<26;i++){
        for(int j=0;j<v[i]/2;j++){
            a.push_back(i+'A');
        }
    }
    b=a;
    reverse(b.begin(),b.end());

    a += t+b;

    cout<<a;
    return;
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