#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    string str;
    cin>>str;

    int n = str.length();

    transform(str.begin(),str.end(),str.begin(),::tolower);

    string ans = "";

    for(int i=0;i<n;i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y'){
            continue;
        }
        ans += '.';
        ans += str[i];
    }
    
    cout<<ans<<"\n";

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