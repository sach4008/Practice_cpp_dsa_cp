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
		string str;
		bool var=true;
		cin>>str;

		if(str.length()==1 && str[0]!='a'){
			cout<<"NO\n";
			continue;
		}
		vector<int> arr(26,-1);

		for(int i=0;i<str.length();i++){
			if(arr[str[i]-'a']!= (-1)){
				cout<<"NO\n";
				var=false;
				break;
			}
			else{
				arr[str[i]-'a'] = i;
			}
		}
		
		if(var){
			for(int i=0;i<str.length()-1;i++){
				if(arr[i]==(-1) || arr[i+1]==(-1)){
					cout<<"NO\n";
					var=false;
					break;
				}
				int start=min(arr[i],arr[i+1])+1;
				int end=max(arr[i],arr[i+1])-1;
				while(start<=end){
					if(str[start]<(i+1+'a')){
						start++;
					}
					else{
						cout<<"NO\n";
						var=false;
						break;
					}
				}
				if(!var){
					break;
				}
			}
		}
		if(var){
			cout<<"YES\n";
		}
	}

	return 0;
}

