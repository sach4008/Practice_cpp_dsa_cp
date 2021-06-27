#include<bits/stdc++.h>

#define mod 1000000007
using namespace std;

long long int fun(int a,int b){
    if(a==1) return 1;
    
    if(b==1) return a;
    if(b==0) return 1;
    
    if (b%2==0) return ((fun(a,b/2)%mod)*(fun(a,b/2)%mod))%mod;
    else return ((fun(a,(b/2)+1)%mod)*(fun(a,b/2)%mod))%mod;
}

long long int powerModulo(int a, int b){
    //Write your code here. Do not modify the function or parameters. Use helper functions if needed.
    
    
    long long int ans = fun(a,b);
    
    return ans%mod;
}
