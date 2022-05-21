#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    string s;

    cin>>s;

    int len = s.length();

    int prev = -1,ans = 0;

    for(int i=0;i<len;i++){
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y'){
            ans = max(ans,i-prev);
            prev = i;
        }
    }
    ans = max(ans,len-prev);
    
    cout<<ans<<"\n";
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