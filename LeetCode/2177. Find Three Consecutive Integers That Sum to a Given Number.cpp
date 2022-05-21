class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        if(num%3LL != 0) return {};
        
        long long b;
        
        b = num / (3*1LL);
        
        return {b-1,b,b+1};
    }
};