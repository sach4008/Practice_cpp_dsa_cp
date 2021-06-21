//Problem link
//		https://codeforces.com/contest/1539/problem/B
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
	int n,q;cin>>n>>q;
	string str;cin>>str;

	int arr[n];
	arr[0]=str[0]-'a'+1;
	for(int i=1;i<n;i++){
		arr[i]=arr[i-1]+(str[i]-'a')+1;
	}

	while(q--){
		int l,r;cin>>l>>r;

		// int ans=0;
		// for(int i=l-1;i<r;i++){
		// 	ans+=(str[i]-'a'+1);
		// }
		int ans=arr[r-1];
		if(l>=2) ans-=arr[l-2];
		cout<<ans<<"\n";
	}
	return 0;
}
