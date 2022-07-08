#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;

// ll cal(string s){
//     int n = s.size();
//     ll ans = 0;

//     for(int i=0;i<n-1;i++){
//         ll t = (s[i]-'0')*10+(s[i+1]-'0');
//         ans += t;

//     }
//     return ans;
// }



void solve(){
    int n,k;
    cin>>n>>k;

    string s;cin>>s;
    
    int cnt1=0,cnt2=0;
    int i=0;
    while(i<n && s[i]!='1'){
        cnt1++;
        i++;
    }
    int j = n-1;
    while(j>=0 && s[j]!='1'){
        cnt2++;
        j--;
    }

    ll ans = 0;
    // if(cnt1+cnt2 <= k){

    //     swap(s[n-1],s[j]);
    //     swap(s[0],s[i]);
    //     ans = min(ans,cal(s));
    //     swap(s[n-1],s[j]);
    //     swap(s[0],s[i]);
    // }
        if(cnt2<=k && j>-1){
            swap(s[n-1],s[j]);
            // ans = min(ans,cal(s));
            // swap(s[n-1],s[j]);
            k-=cnt2;
        }
        if(cnt1<=k && i<n-1){
            swap(s[0],s[i]);
            // ans = min(ans,cal(s));
            // swap(s[0],s[i]);
        }
        // ans = min(ans,cal(s));
        
    for(int i=0;i<n-1;i++){
        ll t = (s[i]-'0')*10+(s[i+1]-'0');
        ans += t;

    }
    
    cout<<ans<<"\n";
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