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
		int k,n,m;
		cin>>k>>n>>m;

		vector<int> mono(n,0);
		for(int i=0;i<n;i++) {cin>>mono[i];}
		vector<int> poly(m,0);
		for(int i=0;i<m;i++) {cin>>poly[i];}

		vector<int> ans;
		bool var =true;
		int a=0,b=0;
		while(a<n && b<m){
			if(mono[a]<=k ){
				ans.push_back(mono[a]);
				if(mono[a]==0) {k++;}
				a++;
			}
			else if(poly[b]<=k ){
				ans.push_back(poly[b]);
				if(poly[b]==0) {k++;}
				b++;
			}
			else{
				var=false;
				break;
			}
		}
		if(var){
			while(a<n){
				if(mono[a]<=k ){
					ans.push_back(mono[a]);
					if(mono[a]==0) {k++;}
					a++;
				}
				else{
					var=false;
					break;
				}
			}
		}
		if(var){
			while(b<m){
				if(poly[b]<=k ){
					ans.push_back(poly[b]);
					if(poly[b]==0) {k++;}
					b++;
				}
				else{
					var=false;
					break;
				}
			}
		}
		if(var){
			for(auto x: ans) {cout<<x<<" ";}
		}
		else{ cout<<"-1";}

		cout<<"\n";
	}

	return 0;
}

