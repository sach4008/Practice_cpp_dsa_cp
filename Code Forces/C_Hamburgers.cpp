#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;

ll b1,c1,s1; 
ll pb,pc,ps;
ll m;
ll b,c,s;

bool check(ll n){
    ll t1 = max((n*b - b1) * pb,0LL);
    ll t2 = max((n*c - c1) * pc,0LL);
    ll t3 = max((n*s - s1) * ps,0LL);
    
    
    if(t1+t2+t3 <= m) return true;
    return false;
}

void solve(){
    string str;cin>>str;
    b=0;c=0;s=0;
    for(char &x:str){
        if(x=='B') b++;
        else if(x=='C') c++;
        else s++;
    }

    cin>>b1>>c1>>s1;
    cin>>pb>>pc>>ps;
    cin>>m;

    ll l=0,h=m;
    ll ans = 0;

    while(l<=h){
        ll mid = (l+h)/2;

        if(check(mid)){
            l=mid+1;
            ans = mid;
        }
        else h= mid-1;
    }
    cout<<ans<<"\n";
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