#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;

vector<int> parent;

int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v]=find_set(parent[v]);
}

void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b)
        parent[b] = a;
}

void solve(){
    int n,m;
    cin>>n>>m;

    vector<pair<int,int>> v(m);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        v[i].first = a-1;
        v[i].second = b-1;
    }

    // set<pair<int,int>> st;
    parent.resize(n);
    for(int i=0;i<n;i++){
        parent[i]=i;
    }
    string str = "";

    for(int i=0;i<m;i++){
        if(find_set(v[i].first)==find_set(v[i].second)){
            str +='1';
            continue;
        }
        union_sets(v[i].first,v[i].second);
        // st.insert(v[i]);
        str += '0';
    }
    // int cnt = 0;

    // for(int i=0;i<n;i++){
    //     if(find_set(i)==i){
    //         cnt++;
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     parent[i]=i;
    // }
    // for(int i=0;i<m;i++){
    //     if(st.find(v[i])!=st.end()){
    //         continue;
    //     }
    //     union_sets(v[i].first,v[i].second);
    // }
    // for(int i=0;i<n;i++){
    //     if(find_set(i)==i){
    //         cnt++;
    //     }
    // }
    cout<<str<<"\n";
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