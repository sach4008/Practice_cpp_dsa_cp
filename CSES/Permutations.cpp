#include<bits/stdc++.h>

#define mod 1000000007
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int n;cin>>n;
	if(n==1){
		cout<<"1\n";
		return 0;
	}
	if(n<4){
		cout<<"NO SOLUTION\n";
		return 0;
	}
	if(n==4){
		cout<<"2 4 1 3\n";
		return 0;
	}
	if(n==5){
		cout<<"4 2 5 3 1\n";
		return 0;
	}
	vector<int> v (n+1,0);
	v[0]=0;
	for(int i=1;i<=n;i++){
		v[i]=i;
	}
	for(int i=1;i<=n-3;i++){
		swap(v[i],v[(i+3)]);
		i++;
	}
	for(int i=1;i<=n;i++) cout<<v[i]<<" ";
	return 0;
}

