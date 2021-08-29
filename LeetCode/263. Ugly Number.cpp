class Solution {
public:
    bool isUgly(int n) {
        
        while(n>=2){
            if(!(n&1)){
                n=n/2;
            }
            else break;
        }
        while(n>=3){
            if(n%3==0){
                n=n/3;
            }
            else break;
        }
        while(n>=5){
            if(n%5==0){
                n=n/5;
            }
            else break;
        }
        
        if(n==1){
            return true;
        }
        return false;
    }
};
