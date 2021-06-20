
// Link to problem
//		https://atcoder.jp/contests/abc206/tasks/abc206_c
// link to official editorial
//		https://atcoder.jp/contests/abc206/editorial/2105



#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int n;cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	if(n==1)  cout<<0;
  	int i=0,j=n-1;
  	int cnt=0;
  	while(i<j){
  		if(arr[i]!=arr[j]) cnt++;
  	}
  	cout<<cnt
	return 0;
}
