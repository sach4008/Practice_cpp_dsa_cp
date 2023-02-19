#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n,k;
    cin>>n>>k;

    int a=INT_MIN;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
        a = max(a,v[i]);
    }
    if(n==k){
        cout<<"1000000000\n";
        return;
    }
    if(k>2){
        cout<<"1000000000\n";
    }
    else if(k==2){
        cout<<min(1000000000LL,2*1LL*a)<<"\n";
    }
    else if(k==1){
        if(n==2)
            cout<<a<<"\n";
        else{
            for(int i=0;i<n-3;i++){
                int a[3]={v[i],v[i+1],v[i+2]};
                sort(a,a+3);
                a[0]=a[2];
            }
        }
    }

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