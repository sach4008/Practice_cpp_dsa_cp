

//Problem link
//		https://codeforces.com/contest/1539/problem/A

//Editorial link
//		https://codeforces.com/blog/entry/91906



#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int t;cin>>t;
	while(t--){
		long long n,x,t;
		cin>>n>>x>>t;
		long long temp;
		if (x==1) temp=t;
		else temp=t/x;
		long long ans;
		if(n<=temp){
			ans=n*(n-1)/2;
			cout<<ans<<endl;
		}
		else{
			ans=(n-temp)*temp;
			ans+=temp*(temp-1)/2;
			cout<<ans<<endl;
		}
	}
	return 0;
}
