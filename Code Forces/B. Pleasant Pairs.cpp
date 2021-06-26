#include<bits/stdc++.h>

#define mod 1000000007
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int test;cin>>test;

	while(test--){
		int n;cin>>n;

		int arr[n+1];
		arr[0]=0;
		for(int i=1;i<=n;i++) cin>>arr[i];

		int cnt=0;
		for(int i=1;i<n;i++){
			if(arr[i]>(i+n)) continue;
			int j=max(arr[i]-i,i+1);
			for(;j<=n;j++){
				if((arr[i]*arr[j])==(i+j)) cnt++;
			}
		}

		cout<<cnt<<"\n";
	}
	return 0;
}



//////// More optimisation

#include<bits/stdc++.h>

#define mod 1000000007
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int test;cin>>test;

	while(test--){
		int n;cin>>n;

		int has[2*n+1];
		for(int i=0;i<=2*n;i++) has[i]=INT_MAX;


		int arr[n+1];
		arr[0]=0;
		for(int i=1;i<=n;i++) {
			cin>>arr[i];
			has[arr[i]]=i;
		}


		int cnt=0;

		for(int i=3;i<2*n;i++){
	        for(int j=1;j<=sqrt(i);j++){
	            if(i%j==0 && i!=j*j){
	                if(has[j]+has[i/j]==i){
	                    cnt++;
	                }
	            }
	        }
	    }

		cout<<cnt<<"\n";
	}
	return 0;
}

