#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    string str;
    cin>>str;

    int n=str.length();
    if(n==1){
        if(str[0]=='?') str[0]='a';
        cout<<str<<"\n";
        return;
    }

    if(str[0]=='?'){
        if(str[1]=='a') str[0]='b';
        else str[0] = 'a';
    }
    for(int i=1;i<n-1;i++){
        if(str[i]==str[i-1]){
            cout<<"-1\n";
            return;
        }
        if(str[i]!='?') continue;

        char a = str[i-1];
        char b = str[i+1];

        if(b=='?'){
            if(a=='a') str[i] = 'b';
            else str[i] = 'a';
        }
        else if(a==b){
            if(a=='a') str[i] = 'b';
            else str[i] = 'a';
        }
        else{
            if((a=='a' && b=='c')||(a=='c' && b=='a')) 
                str[i] = 'b';
            else if((a=='b' && b=='c')||(a=='c' && b=='b'))
                str[i] = 'a';
            else
                str[i] = 'c';
        }
    }
    if(str[n-1]=='?'){
        if(str[n-2]=='a') str[n-1]='b';
        else str[n-1] = 'a';
    }
    if(str[n-1]==str[n-2]){
        cout<<"-1\n";
        return;
    }
    cout<<str<<"\n";
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