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

		int od=0,ev=0;
		int tmp;
		for(int i=0;i<2*n;i++){
			cin>>tmp;
			if(tmp%2==0){
				ev++;
			}
			else{
				od++;
			}
		}

		if(ev==od){
			cout<<"Yes\n";
		}
		else{
			cout<<"No\n";
		}
	}

	return 0;
}
