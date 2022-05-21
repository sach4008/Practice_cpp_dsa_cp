#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;


ll a,b,c,d;

bool check(ll x,ll y){

    if((pow(abs(a-x),2)+pow(abs(b-y),2) == 5) && (pow(abs(c-x),2)+pow(abs(d-y),2)==5)){
        return true;
    }
    return false;
}

void solve(){
    
    cin>>a>>b>>c>>d;

    if(check(a-1,b-2) || 
    check(a-1,b+2) || 
    check(a+1,b-2) || 
    check(a+1,b-2) || 
    check(a-2,b+1) || 
    check(a-2,b-1) || 
    check(a+2,b+1) || 
    check(a+2,b-1) ){
        cout<<"Yes\n";
        return;
    }

    swap(a,c);
    swap(b,d);

    if(check(a-1,b-2) || 
    check(a-1,b+2) || 
    check(a+1,b-2) || 
    check(a+1,b-2) || 
    check(a-2,b+1) || 
    check(a-2,b-1) || 
    check(a+2,b+1) || 
    check(a+2,b-1) ){
        cout<<"Yes\n";
        return;
    }

    cout<<"No\n";
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