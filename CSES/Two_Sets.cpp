#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;

    long long sum = n*(n+1)/2;

    if(sum&1){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
        vector<bool> arr(n+1,true);

        long long a=0,b=n;

        long long tmp = sum / 2;

        for(int i=n;i>0;i--){
            if(tmp>=i){
                tmp-=i;
                arr[i]=false;
                a++;
            }
        }
        cout<<a<<"\n";
        for(int i=1;i<=n;i++){
            if(arr[i]==false) cout<<i<<" ";
        }
        cout<<"\n"<<n-a<<"\n";
        for(int i=1;i<=n;i++){
            if(arr[i]==true) cout<<i<<" ";
        }
        cout<<"\n";
    }
}