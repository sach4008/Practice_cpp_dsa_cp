#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int a,b,tmp;
    cin>>a>>b;

    if( 2*a-b >=0 && (2*a-b)%3 ==0 && 2*b-a >= 0 && (2*b-a)%3 ==0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }

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