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
		int xa,ya,xb,yb,xf,yf;

		cin>>xa>>ya>>xb>>yb>>xf>>yf;

		int ans=0;

		ans=abs(xa-xb)+abs(ya-yb);

		if(xa==xb && xa==xf) {
			if((yf>ya && yf < yb)||(yf<ya && yf > yb)) 
				ans+=2;
		}

		else if(ya==yb && ya==yf)  {
			if((xf>xa && xf < xb)||(xf<xa && xf > xb)) 
				ans+=2;
		}

		cout<<ans<<"\n";
	}

	return 0;
}
