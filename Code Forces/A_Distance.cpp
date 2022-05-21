#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int x,y;
    cin>>x>>y;

    if(x==0 && y==0){
        cout<<"0 0\n";
        return;
    }
    double a = (x-y)/2.0;
    double b = (y-x)/2.0;

    if((ceil(a) != floor(a)) && (ceil(b) != floor(b))){
        cout<<"-1 -1\n";
        return;
    }
    if(ceil(a) != floor(a)){
        a = x+y-b;
    }
    if(ceil(b) != floor(b)){
        b = x+y-a;
    }
    if(a<0 || b<0){
        cout<<"-1 -1\n";
        return;
    }
    cout<<a<<" "<<b<<"\n";
    return ;
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