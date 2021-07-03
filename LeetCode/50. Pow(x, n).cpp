class Solution {
public:
    
    double fun(double x,int n){
        if(n<0){
            x=1.00000/x;
            n=abs(n);
        }
        if(n==1) return x;
        if(n==0) return 1.00000;
        if(n%2==0){
            double tmp=fun(x,n/2);
            return tmp*tmp;
        }
        else{
            double tmp=fun(x,n/2);
            return tmp*tmp*x;
        }
    }
    
    double myPow(double x, int n) {
        return fun(x,n);
    }
};
