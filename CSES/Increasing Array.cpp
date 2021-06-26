#include<bits/stdc++.h>

#define mod 1000000007
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int n;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	long long cnt=0;
	for(int i=1;i<n;i++){
		if(arr[i]<arr[i-1]){
			cnt+=(arr[i-1]-arr[i]);
			arr[i]+=(arr[i-1]-arr[i]);
		}
	}
	cout<<cnt<<"\n";

	return 0;
}

