#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n;
    cin>>n;

    int a=0,b=0,c=0,d=0,e,f;

    for(int i=0;i<n;i++){
        cin>>e>>f;
        if(e==0){
            if(f<0)
                d=max(d,abs(f));
            else
                c=max(c,f);
        }
        else{
            if(e<0){
                b=max(b,abs(e));
            }
            else{
                a=max(a,e);
            }
        }
    }

    cout<<2*(a+b+c+d)<<"\n";

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