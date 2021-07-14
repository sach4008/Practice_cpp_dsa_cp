#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;

void solve(){
    int n;
    cin>>n;

    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);

    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];

    for(int i=0;i<n;i++) c[i]=a[i]-b[i];
    
    ll cnt=0;
    sort(c.begin(),c.end());
    for(int i=0;i<n;i++){
        if(c[i]<=0) continue;

        int pos = lower_bound(c.begin(), c.end(), -c[i] + 1) - c.begin();
		cnt += i - pos;
    }


    cout<<cnt<<"\n";
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