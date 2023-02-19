#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;


int fun(int l,int n){
    int cnt=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            if(i>=l)
                cnt++;
            else if(n/i>=l && i!=sqrt(n))
                cnt++;
        }
    }
    if(1>=l)
        cnt++;
    return cnt;
}

ll helper(int n){
    if(n<2)
        return 0;
    
    return n*1LL*(n-1)*1LL*(n-2)/6;
}
ll help(int n){
    if(n<3)
        return 0;
    
    return n*1LL*(n-1)/2;
}

void solve(){
    int l,r;
    cin>>l>>r;

    vector<int> v(r-l+1);

    for(int i=l;i<=r;i++)
    {
        v[i-l]=fun(l,i);
    }
    for(auto&x:v)
        cout<<x<<" ";
    cout<<"\n\n";

    int res=0;
    for(int i=l;i<=r;i++){
        res += help(v[i-l+1]);
    }

    cout<<helper(r-l+1)-res<<"\n";
    return;
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