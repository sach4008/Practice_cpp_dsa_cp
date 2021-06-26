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

		if(n%2==0){
			for(int i=1;i<=n;i++){
				cout<<i+1<<" "<<i<<" ";
				i++;
			}
		}
		else{
			cout<<3<<" "<<1<<" "<<2<<" ";
			for(int i=4;i<=n;i++){
				cout<<i+1<<" "<<i<<" ";
				i++;
			}
		}
		cout<<"\n";
	}
	return 0;
}

