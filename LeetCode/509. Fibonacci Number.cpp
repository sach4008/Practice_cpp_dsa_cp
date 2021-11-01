class Solution {
public:
    int fib(int n) {
        if(n==0){
            return 0;
        }
        long long a = 0;
        long long b = 1;
        long long c = 1;
        
        while(--n){
            c=a+b;
            a=b;
            b=c;
        }
        
        return c;
    }
};