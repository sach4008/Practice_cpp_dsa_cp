#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int a=0,b=0;
    int arr[5];

    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        if(arr[i]==1) a++;
        else if(arr[i]==2) b++;
    }

    if(a>b){
        cout<<"INDIA\n";
    }
    else if(a<b){
        cout<<"ENGLAND\n";
    }
    else{
        cout<<"DRAW\n";
    }
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