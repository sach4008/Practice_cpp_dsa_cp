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
		long long a,b,n;cin>>n>>a>>b;

		if((n==1)||(b==1)){
			cout<<"Yes\n";
		}
		else if(a==1){
			if((n-1)%b==0){
				cout<<"Yes\n";
			}
			else cout<<"No\n";
		}
		else{
			bool var=false;
			long long temp=1;
			while(temp<=n){
				if((temp<=n)&&((n-temp)%b==0)){
					var=true;
					break ;
				}
				temp=temp*a;
			}
			if(var) cout<<"Yes\n";
			else cout<<"No\n";
		}
	}

	return 0;
}
