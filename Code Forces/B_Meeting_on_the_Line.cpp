#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;

long double abss(long double a){
    if(a>0)
        return a;
    return (-1.000000*a);
}

long double check(vector<int>&c,vector<int>&t,long double tip){

    int n = c.size();
    long double ans = -1.0000000;

    for(int i=0;i<n;i++){
        if(ans <( (long double)t[i] + abss(tip - (long double)c[i])))
            ans = ((long double)t[i] + abss(tip - (long double)c[i]));
    }
    return ans;
}

long double helper(vector<int>&c,vector<int>&t,long double lo,long double en,long double cons){
    long double ans = 0;
    // long double lo=tmp - cons,en=tmp;

    while(lo<=en){
        // cout<<"f";
        long double mid = (en+lo)/2.000000000;

        long double a = check(c,t,mid+cons);
        long double b = check(c,t,mid);
        long double d = check(c,t,mid-cons);

        if(b<=a && b<=d){
            ans = mid;
            // cout<<ans<<" ";
            break;
        }
        else if(a<d){
            ans = mid+cons;
            lo = mid+cons;
        }
        else if(d<a){
            ans = mid-cons;
            en = mid-cons;
        }
        else {
            // cout<<"f";
            ans = mid;
            break;
        }
    }
    return ans;
}

void solve(){
    // cout<<"h";
    int n;cin>>n;
    vector<int> c(n),t(n);

    for(int i=0;i<n;i++) cin>>c[i];
    for(int i=0;i<n;i++) cin>>t[i];
    
    long double ans = helper(c,t,0.00,100000000.00,0.1);
    ans = helper(c,t,ans-1,ans+1,0.1);
    ans = helper(c,t,ans-0.1,ans+0.1,0.01);
    ans = helper(c,t,ans-0.01,ans+0.01,0.001);
    ans = helper(c,t,ans-0.001,ans+0.001,0.0001);
    ans = helper(c,t,ans-0.0001,ans+0.0001,0.00001);
    ans = helper(c,t,ans-0.00001,ans+0.00001,0.000001);
    ans = helper(c,t,ans-0.000001,ans+0.000001,0.0000001);
    ans = helper(c,t,ans-0.0000001,ans+0.0000001,0.00000001);
    
    cout<<ans<<"\n";
    // sort(c.begin(),c.end());

    // if(n&1){
    //     cout<<c[n/2]<<"f\n";
    // }
    // else{
    //     cout<<(double)(c[n/2]+c[(n-1)/2])/2.00<<"g\n";
    // }
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