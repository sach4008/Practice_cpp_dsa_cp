#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n;cin>>n;
    vector<int> v(2*n),a(n),b(n);

    for(int i=0;i<2*n;i++){
        cin>>v[i];
    }

    sort(v.begin(),v.end());

    for(int i=0;i<2*n;i++){
        if(i&1){
            a[i/2] = v[i];
        }
        else{
            b[i/2] = v[i];
        }
    }

    int c=-1,d=-1;
    if(a[0]!=0){
        c=0;
    }
    else{
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1] || a[i]==a[i-1]+1){
                continue;
            }
            else{
                c=a[i-1]+1;
                break;
            }
        }
        
    }
    if(c==-1){
        c=a[n-1]+1;
    }
    if(b[0]!=0){
        d=0;
    }
    else{
        for(int i=1;i<n;i++){
            if(b[i]==b[i-1] || b[i]==b[i-1]+1){
                continue;
            }
            else{
                d=b[i-1]+1;
                break;
            }
        }
        
    }
    if(d==-1){
        d=b[n-1]+1;
    }
    if(c==d) {
        // cout<<c<<" "<<d<<"\n";
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
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