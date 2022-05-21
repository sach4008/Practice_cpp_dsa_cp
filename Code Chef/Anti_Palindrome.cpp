#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n;cin>>n;
    string s;
    cin>>s;

    if(n&1){
        cout<<"NO\n";
        return;
    }

    vector<int> v(26,0);

    for(int i=0;i<n;i++){
        v[s[i]-'a']++;
    }

    for(auto &x:v){
        if(x>n/2){
            cout<<"NO\n";
            return;
        }
    }

    cout<<"YES\n";

    sort(s.begin(),s.end());
    // cout<<s<<"\n";
    
    int tm = n/2,a = 0;
    // cout<<tm<<" ";
    while(true){
        if(s[tm-a-1]==s[tm+a]){
            swap(s[a],s[tm+a]);
            a++;
        }
        else break;
    }

    cout<<s<<"\n";
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