#include<bits/stdc++.h>

#define mod 1000000007
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	string str;cin>>str;

	int maxi=INT_MIN,cnt=1;
	int len=str.length();

	for(int i=0;i<len-1;i++){
		if(str[i]!=str[i+1]){
			maxi=max(maxi,cnt);
			cnt=1;
		}
		else cnt++;
	}
	maxi=max(maxi,cnt);
	cout<<maxi<<"\n";

	return 0;
}

