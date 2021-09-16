#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n;
    cin>>n;

    int cnt=0;

    int a=5;

    while(n>=a){
        cnt+=n/a;
        a*=5;
    }
    cout<<cnt<<"\n";
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