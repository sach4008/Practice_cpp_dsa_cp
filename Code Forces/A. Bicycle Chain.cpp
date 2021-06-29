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
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];

	int m;cin>>m;
	int b[m];
	for(int i=0;i<m;i++) cin>>b[i];

	int maxi=INT_MIN,cnt=1,tmp=INT_MIN;

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(b[j]%a[i]==0){
				if(b[j]/a[i]>maxi){
					maxi=b[j]/a[i];
					cnt=1;
				}
				else if(b[j]/a[i]==maxi){
					cnt++;
				}
			}
		}
	}

	cout<<cnt<<"\n";
	return 0;
}

