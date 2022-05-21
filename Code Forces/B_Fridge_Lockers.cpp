#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
using namespace std;





void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> v(n);

    for(int i=0;i<n;i++) cin>>v[i];

    int a = INT_MAX,b=INT_MAX,c=-1,d;
    int sum = 0;

    if(m<n || n<3){
        cout<<"-1\n";
        return;
    }  

    for(int i=0;i<n;i++){
        sum+=v[i];

        if(v[i]<a){
            b=a;
            d=c;
            c=i;
            a=v[i];
        }
        else if(v[i]<b) {
            b = v[i];
            d = i;
        }
    }

    int ans = 2*sum + (a+b)*(m-n);

    cout<<ans<<"\n";

    for(int i=1;i<n;i++){
        cout<<i<<" "<<i+1<<"\n";
    }
    cout<<n<<" 1\n";
    m-=n;
    while(m--){
        cout<<c<<" "<<d<<"\n";
    }
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