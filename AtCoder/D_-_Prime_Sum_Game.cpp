#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;

// void prime(int b,int c,vector<int> &v){

//     for(int i=max(2,b);i<=c;i++){
//         bool var = true;
//         for(int j=2;j<i;j++){
//             if(i%j==0){
//                 var = false;
//                 break;
//             }
//         }
//         v.push_back(i);
//     }
//     return;
// }

bool isprime(int x){
    for(int i=2;i<x;i++){
        if(x%i==0) return false;
    }
    return true;
}

void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    // vector<int> x,y;

    // prime(a,b,x);
    // prime(c,d,y);

    bool res = true;

    for(int q=a;q<=b;q++){
        bool var = false;

        for(int w=c;w<=d;w++){
            var = var | isprime(q+w);
        }

        res = res & var;
    }

    if(res) cout<<"Aoki\n";
    else cout<<"Takahashi\n";
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