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
		int n,m;
		cin>>n>>m;

		int has[m][26];
		for(int i=0;i<m;i++){
			for(int j=0;j<26;j++){
				has[i][j]=0;
			}
		}


		vector<string> str(n);
		for(int i=0;i<n;i++){
			cin>>str[i];
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				has[j][str[i][j]-'a']++;
			}
		}
		
		vector<string> str2(n-1);
		for(int i=0;i<n-1;i++){
			cin>>str2[i];
		}
		for(int i=0;i<n-1;i++){
			for(int j=0;j<m;j++){
				has[j][str2[i][j]-'a']--;
			}
		}

		string ans="";
		for(int i=0;i<m;i++){
			for(int j=0;j<26;j++){
				if(has[i][j]!=0){
					ans+=('a'+j);
					break;
				}
			}
		}

		cout<<ans<<"\n";
		cout << flush;
		
	}

	return 0;
}


