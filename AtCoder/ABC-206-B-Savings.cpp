//link to problem.
//	https://atcoder.jp/contests/abc206/tasks/abc206_b
//Official editorial
//	https://atcoder.jp/contests/abc206/editorial/2104



#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int n;cin>>n;
	
	int temp=sqrt(2*n);
	if(temp*(temp+1)>=2*n) cout<<temp;
	else cout<<temp+1;
	return 0;
}
