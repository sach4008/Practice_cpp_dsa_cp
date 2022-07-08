#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;


bool check(string &str,int a,int b){
    while(a<b){
        if(str[a]!=str[b])
            return false;
        a++;
        b--;
    }
    return true;
}


void solve(){
    int n;
    cin>>n;
    string str;
    cin>>str;

    int cnt = 0;

    for(int i=0;i<(n+1)/2;i++){
        if(check(str,i+1,n-1-i)){
            cnt++;
        }
    }
    if(n&1)
        cnt = 2*cnt -1;
    else
        cnt *= 2;

    cout<<cnt<<"\n";
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