#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    string str;
    int j=0;

    cin>>str;

    for(int i=1;i<str.length();i++){
        if(str[i]<str[j]){
            j=i;
        }
    }
    cout<<str[j]<<" ";
    for(int i=0;i<str.length();i++){
        if(i!=j){
            cout<<str[i];
        }
    }
    cout<<"\n";
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