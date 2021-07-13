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

		vector<int> a(n),b(n);
		int sa=0,sb=0;
		for (int i=0;i<n;i++){
			cin>>a[i];
			sa+=a[i];
		}
		for (int i=0;i<n;i++){
			cin>>b[i];
			sb+=b[i];
		}
		if(sa!=sb){
			cout<<"-1\n";
			continue;
		}
		vector<pair<int,int>> ans;
		int j=0;
		for(int i=0;i<n;){
			if(a[i]<b[i]){
				j=i+1;
				while(j<n){
					if(a[j]>b[j]){
						a[i]++;
						a[j]--;
						// cout<<j+1<<" "<<i+1<<"\n";
						ans.push_back({j+1,i+1});
						break;
					}
					j++;
				}
			}
			else if(a[i]>b[i]){
				j=i+1;
				while(j<n){
					if(a[j]<b[j]){
						a[j]++;
						a[i]--;
						// cout<<i+1<<" "<<j+1<<"\n";
						ans.push_back({i+1,j+1});
						break;
					}
					j++;
				}
			}
			else{
				i++;
			}
		}
		cout<<ans.size()<<"\n";
		for(auto x: ans){
			cout<<x.first<<" "<<x.second<<"\n";
		}
	}

	return 0;
}
