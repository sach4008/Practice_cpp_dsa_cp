#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n;
    cin>>n;

    string str;
    cin>>str;

    string str2=str;

    sort(str.begin(),str.end());

    int cnt=0;
    
    for(int i=0;i<n;i++){
        if(str[i]!=str2[i]) cnt++;
    }

    cout<<cnt<<"\n";
}

int main()
{
	ll test=1;
	cin>>test;

	while(test--){
		solve();
	}

	return 0;
}