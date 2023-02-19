#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;


int max(int a,int b){
    if(a>b)
        return a;
    return b;
}


void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int a = 0,b=1000,c=v[n-1]-v[0];
    int ans = INT_MIN;

    for(int i=1;i<n;i++){
        a = max(a,v[i]);
    }
    ans = max(ans,a-v[0]);
    for(int i=0;i<n-1;i++){
        b = min(b,v[i]);
    }
    ans = max(ans,v[n-1]-b);
    for(int i=0;i<n-1;i++){
        c = max(c,v[i]-v[i+1]);
    }

    cout<<max(ans,c)<<"\n";
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