#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;

vector<int> parent;

int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b)
        parent[b] = a;
}

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    parent.resize(s.size());

    for(int i=0;i<s.size();i++){
        parent[i] = i;
    }
    stack<int> st;

    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            st.push(i);
        }
        else{
            int tmp = st.top();
            st.pop();
            union_sets(tmp,i);
            if(!st.empty()){
                union_sets(st.top()+1,i);
            }
        }
        if(st.empty()){
            union_sets(0,i);
        }
    }
    // union_sets(0,s.size()-1);
    int cnt = 0;

    for(int i=0;i<s.size();i++){
        if(find_set(i)==i){
            cnt++;
        }
    } 
    // for(int i=0;i<s.size();i++){
    //     cout<<parent[i]<<" ";
    // }
    // cout<<"\n";

    cout<<cnt<<"\n";
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