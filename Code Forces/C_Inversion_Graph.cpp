#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

void solve(){
    ordered_set st;

    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    int ans =0;
    vector<int> s(n+1,-1);

    st.insert(v[0]);
    for(int i=1;i<n;i++){
        int tmp = st.order_of_key(v[i]);
        int a = -1;
        if(tmp!=i) a = *(st.find_by_order(tmp));
        while(a!=-1 && s[a] != -1){
            a = s[a];
        }
        tmp++;
        while(tmp < i){
            int x = *(st.find_by_order(tmp));
            // cout<<x;
            bool var = true;
            if(x== a || s[x] == a) var = false;
            while(s[x]!=-1){
                if(x== a || s[x] == a) {var = false;break;}
                else x = s[x];
            }
            if(var) s[x] = a;
            tmp++;
        }
        s[v[i]] = a;
        st.insert(v[i]);

        // cout<<a<<" "<<tmp<<"\n";
    }
    // cout<<"\n\n";
    // set<int> res;
    for(int i=1;i<=n;i++){
        if(s[i]==-1){
            ans++;
        }
    }
    cout<<ans<<"\n";
}

void func (){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    stack<int> st;
    int mi = INT_MAX;

    for(int i=n-1;i>=0;i--){
        while(!st.empty() && st.top()<v[i]) st.pop();

        // if(st.empty() || v[i]<mi) 
        st.push(v[i]);

        mi = min(mi,v[i]);
    }
    
    cout<< st.size()<<"\n";

    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
}
int main()
{
    ll test=1;
    cin>>test;

    while(test--){
        // solve(); giving tle
        func();
    }

    return 0;
}