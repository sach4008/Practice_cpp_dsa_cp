#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	ll test=1;
	cin>>test;

	while(test--){
		int n;
		cin>>n;

		int arr[n];
		int has[2][100005]={0};

		for(int i=0;i<n;i++){
			cin>>arr[i];
			has[i&1][arr[i]]++;
		}
		sort(arr,arr+n);
		for(int i=0;i<n;i++){
			has[i&1][arr[i]]--;
		}
		bool var=true;
		for(int i=1;i<=100000;i++){
			for(int j=0;j<2;j++){
				if(has[j][i]>0) {var=false;}
			}
		}

		if(var==true){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}

	return 0;
}
