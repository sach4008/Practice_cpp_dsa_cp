#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;


bool check(vector<int> &v){
	int n = v.size();
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<n;k++){
				if((v[i] >= v[j] && v[j] >= v[k]) ||
					(v[i] <= v[j] && v[j] <= v[k])){
					return true;
				}
			}
		}
	}
	return false;
}


void solve(){
    int n;
    cin>>n;
    
    vector<int> a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=0;
    for(int i=0;i<n;i++){
		vector<int> v;
		for(int j=i;j<n;j++){
			v.push_back(a[j]);
			if(check(v)) break;
			ans++;
		}
	}

    cout<<ans<<"\n";
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