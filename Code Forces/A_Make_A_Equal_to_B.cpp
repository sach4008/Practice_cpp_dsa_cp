#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];

    int cnt1=0,cnt2=0;

    for(auto&x:a) if(x&1) cnt1++;
    for(auto&x:b) if(x&1) cnt2++;

    int cnt3=0;

    for(int i=0;i<n;i++) if(a[i]!=b[i]) cnt3++;

    int y = abs(cnt1-cnt2);

    if(y==cnt3){
        cout<<y<<"\n";
    }
    else{
        cout<<y+1<<"\n";
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