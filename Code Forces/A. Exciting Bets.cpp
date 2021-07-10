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
		ll a,b;
		cin>>a>>b;

		ll diff=abs(a-b);

		if(a==b){
			cout<<"0 0\n";
		}
		else if(a==0){
			cout<<diff<<" 0\n";
		}
		else if(diff==1){
			cout<<"1 0\n";
		}
		else{
			ll c=a%diff;
			if(c==0){
				cout<<diff<<" "<<c<<"\n";
			}
			else{
				ll d=c;
				ll e=diff-c;

				if(d>e){
					c=e;
				}
				cout<<diff<<" "<<c<<"\n";
			}
		}
	}

	return 0;
}
