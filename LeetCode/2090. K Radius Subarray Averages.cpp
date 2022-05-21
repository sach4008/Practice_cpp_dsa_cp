class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int len = nums.size();
        vector<int> ans(len);
        long long tmp = 0;
        
        for(int i=0;i<2*k && i<len;i++){
            tmp += nums[i];
        }
        for(int i = 0;i<len;i++){
            if(i<k || i+k >= len){
                ans[i] = -1;
            }
            else {
                tmp += nums[i+k];
                // cout<<tmp<<" "<<(2*k + 1)<<"\n";
                ans[i] = tmp/(2*k + 1);
                tmp -= nums[i-k];
            }
        }
        
        return ans;
    }
};