class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        
        int cnt = 0,k = 1;
        
        for(int i=0;i<31;i++){
            if(n&k)cnt++;
            
            k = k << 1;
        }
        
        if(cnt == 1) return true;
        return false;
    }
};


// Another solution
class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        return ((n>0) && ( (n&(n-1)) == 0));
    }
};