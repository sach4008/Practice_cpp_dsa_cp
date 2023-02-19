#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n;
    cin>>n;
    string str;
    cin>>str;

    string ans = "";

    for(int i=0;i<n;i++){
        if(i+2<n){
            if(i+2<n && str[i+2]=='0'){
                if(i+3<n && str[i+3]!='0'){
                    ans += 'a' + (str[i]-'0')*10 + (str[i+1]-'0') -1;
                    i += 2;
                }
                else if(i+3>=n){
                    ans += 'a' + (str[i]-'0')*10 + (str[i+1]-'0') -1;
                    i += 2;
                }
                else{
                    ans += 'a' + (str[i]-'0')-1;
                    // i++;
                }
            }
            else{
                ans += 'a' + (str[i]-'0')-1;
                // i++;
            }
        }
        else{
            ans += 'a' + (str[i]-'0')-1;
        }
    }

    cout<<ans<<"\n";
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