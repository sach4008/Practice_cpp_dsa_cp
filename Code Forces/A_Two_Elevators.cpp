#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    long long a,b,c;
    cin>>a>>b>>c;

    long long ans1 = a-1;
    // if(b!=1)
    long long ans2 = abs(c-b)+abs(c-1);
    
    // cout<<(ans+1LL)<<"\n";

    if(ans1<ans2)
        cout<<"1\n";
    else if(ans2<ans1)
        cout<<"2\n";
    else
        cout<<"3\n";
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