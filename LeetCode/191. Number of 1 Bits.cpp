class Solution {
public:
    int hammingWeight(uint32_t n) {
        long cnt = 0,k = 1;
        
        for(int i=0;i<=31;i++){
            if(n&k)cnt++;
            
            k = k << 1;
        }
        return cnt;
    }
};