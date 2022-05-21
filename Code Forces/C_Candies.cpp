#include<bits/stdc++.h>
using namespace std;
 
bool valid(long long x,long long k){
    long long cnt=0LL,n=x;
    
    while(n>0LL){
        if(n<=k){
            cnt+=n;
            break;
        }
        n-=k;
        cnt+=k;
        
        n-=(n/10);
    }
    long double t = 2.0;
    if(cnt >= ceil(x/t)) return true;
    
    return false;
}
int main(){
    
    // write your code here
    int t=1;
    // cin>>t;
    
    while(t--){
        long long n;
        cin>>n;
 
        long long lo = 1LL,hi = n;
        long long ans = 0;
 
        while(lo<=hi){
            long long mid = lo+(hi-lo)/2LL;
 
            if(valid(n,mid)){
                ans = mid;
                hi = mid-1LL;
            }
            else {
                lo = mid+1LL;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}