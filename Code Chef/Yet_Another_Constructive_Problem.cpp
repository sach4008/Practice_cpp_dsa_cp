#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n;
    cin>>n;

    int a=n,b=n,c=0;

    for(int i=0;i<31;i++){
        if(!(b&(1<<i))){
            b = b|(1<<i);
            break;
        }
    }
    // cout<<((a|b)&(b|c)&(c|a))<<" ";
    cout<<a<<" "<<b<<" "<<c<<"\n";

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