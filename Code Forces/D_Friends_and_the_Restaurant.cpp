#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n;
    cin>>n;
    vector<int>a(n),b(n),c(n);

    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    
    for(int i=0;i<n;i++)
        c[i] = b[i]-a[i];
    
    sort(c.begin(),c.end());

    int cnt = 0;
    int st=0,en=n-1;
    while(st<en){
        if(c[st]+c[en]>=0){
            st++;
            en--;
            cnt++;
        }
        else{
            st++;
        }
    }
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