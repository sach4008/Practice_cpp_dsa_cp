#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n; cin>>n;

    if(n%7==0){
        cout<<n<<"\n";
        return;
    }

    int a=0,b,c;

    c = n%10;
    n/=10;
    b = n%10;
    n/=10;
    a = n%10;
    n/=10;

    if(a!=0){
        for(int i=1;i<10;i++){
            n = i*100 + b*10 + c;
            if(n%7==0){
                cout<<n<<"\n";
                return;
            }
        }
    }

    for(int i=1;i<10;i++){
        n = a*100 + i*10 + c;
        if(n%7==0){
            cout<<n<<"\n";
            return;
        }
    }
    for(int i=1;i<10;i++){
        n = a*100 + b*10 + i;
        if(n%7==0){
            cout<<n<<"\n";
            return;
        }
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