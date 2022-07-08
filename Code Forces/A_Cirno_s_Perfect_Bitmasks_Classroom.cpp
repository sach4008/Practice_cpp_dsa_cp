#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;


bool fun(int a,int n){
    if((a&n)>0 && (a^n)>0){
        cout<<a<<"\n";
        return true;
    }
    return false;
}


void solve(){
    int n;cin>>n;
    
    int a = 1;

    for(int i=1;i<32;i++){
        if((a&n)>0){
            break;
        }
        a *= 2;
    }
    int b =1;
    for(int i=1;i<32;i++){
        if((b^n)>0){
            break;
        }
        b *= 2;
    }
    // cout<<a<<" "<<b<<"\n";
    
    if(fun(min(a,b),n)){
        return;
    }
    else if(fun(max(a,b),n)){
        return;
    }
    fun((a|b),n);
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