#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;


void solve(){
    int n,a,b;
    cin>>n>>a>>b;

    string str;
    cin>>str;

    int ans=0;
    if(b>=0){
        ans=(a+b)*n;
    }
    else{
        ans=a*n;
        int cnt=0;
        char c=str[0],d=str[0];
        for(int i=1;i<n;i++){
            if(str[i]!=c && str[i]!=d){
                cnt++;
            }
            c=str[i];
        }
        cnt++;
        ans+=(b*cnt);
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