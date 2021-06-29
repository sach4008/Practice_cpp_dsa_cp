#include<bits/stdc++.h>

#define mod 1000000007
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int k;cin>>k;
	string str;cin>>str;

	int alp[26]={};
	int len=str.length();

	for(int i=0;i<len;i++){
		alp[str[i]-'a']++;
	}
	for(int i=0;i<26;i++){
		if(alp[i]%k!=0) {
			cout<<"-1\n";
			return 0;
		}
		else{
			alp[i]/=k;
		}
	}
	for(int i=0;i<k;i++){
		for(int j=0;j<26;j++){
			for(int k1=0;k1<alp[j];k1++){
				char temp='a'+j;
				cout<<temp;
			}
		}
	}

	return 0;
}

