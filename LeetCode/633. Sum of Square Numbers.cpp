class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c==1 || c==0) return true;
        
        for(int i=0;i<c;i++){
            int tmp = c - (i*i);
            double x = sqrt(tmp);
            
            if(floor(x) == ceil(x)) return true;
            
            if(x<=i) break;
        }
        
        return false;
    }
};