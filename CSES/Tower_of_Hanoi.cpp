#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;

void helper(int n,int a,int c,int b){
    if(n==0){
        return;
    }
    helper(n-1,a,b,c);
    cout<<a<<" "<<c<<"\n";
    helper(n-1,b,c,a);
}



void solve(){
    int n;cin>>n;

    cout<<pow(2,n)-1<<endl;
    helper(n,1,3,2);

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