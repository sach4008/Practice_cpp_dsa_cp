class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> ans,res;
        int len = nums.size();
        
        for(int i=0;i<len;i++){
            if(nums[i]==key) res.push_back(i);
        }
        
        for(int i=0;i<len;i++){
            for(int& x:res){
                if(abs(x-i) <= k){
                    ans.push_back(i);
                    break;
                }
            }
        }
        
        return ans;
    }
};