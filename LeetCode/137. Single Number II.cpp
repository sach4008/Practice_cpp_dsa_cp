class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        vector<int> v(32,0);
        
        for(auto x:nums){
            for(int i=0;i<32;i++){
                if(x&(1<<i)){
                    v[i]++;
                }
            }
        }
        
        int ans = 0;
        
        for(int i=0;i<32;i++){
            if(v[i]%3){
                ans += 1<<i;
            }
        }
        return ans;
    }
};