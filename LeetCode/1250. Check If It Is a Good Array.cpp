class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int gcd=nums[0];
        
        for(auto x: nums){
            gcd=__gcd(gcd,x);
        }
        
        return gcd==1 ? 1 : 0  ;
    }
};
