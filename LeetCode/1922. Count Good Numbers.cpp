
#define mod 1000000007

class Solution {
public:
    long long power(long long x, long long y){
        int res = 1;
        while (y>0){
            if (y % 2 == 1) res = (res * x)%mod;

            y = y >> 1;

            x = (x * x)%mod;
        }
        return res;
    }
    int countGoodNumbers(long long n) {
        
        long long ans=1;
        
        
        if(n%2==0){
            ans=(power(4,n/2)*power(5,n/2))%mod;
        }
        else{
            ans=(power(4,n/2)*power(5,(n+1)/2))%mod;
        }
        return (ans+mod)%mod;
    }
};
