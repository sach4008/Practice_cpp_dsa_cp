
//link to problem.
//	https://atcoder.jp/contests/abc206/tasks/abc206_a
//Official editorial
//	https://atcoder.jp/contests/abc206/editorial/2103




#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int n;cin>>n;
	if(floor(n*1.08)>206) cout<<":(\n";
	else if(floor(n*1.08)==206) cout<<"so-so\n";
	else cout<<"Yay!\n";
	return 0;
}
