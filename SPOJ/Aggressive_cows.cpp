#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;


bool check(vector<int> &arr,int c,int val){

    int prev=arr[0];
    int cnt=1;

    for(int i=1;i<arr.size();i++){
        if(arr[i]-prev>=val){
            cnt++;
            prev=arr[i];
        }
    }
    if(cnt>=c) return true;

    return false;
}


void solve(){
    int n,c;
    cin>>n>>c;

    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];

    sort(arr.begin(),arr.end());

    int mind=0,maxd=arr[n-1];

    int result=arr[n-1];

    while(mind<maxd){
        int mid=mind+(maxd-mind)/2;

        if(check(arr,c,mid)){
            result=mid;
            mind=mid+1;
        }
        else{
            maxd=mid;
        }
    }
    cout<<result<<"\n";
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