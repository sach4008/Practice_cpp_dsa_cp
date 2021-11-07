class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(), nums.end());
        int ans = 1000000;
        
        for(int i = 0; i < nums.size();){
            int start = i+1, end = nums.size()-1;

            while(start < end){
                int tmp = nums[i]+nums[start]+nums[end];
                
                if((abs(tmp-target)<abs(target-ans))){
                    // cout<<i<<" "<<nums[i]<<" "<<nums[start]<<" "<<nums[end]<<"==\n";
                    ans = tmp;
                }
                if(tmp < target){
                    // cout<<i<<" "<<nums[i]<<" "<<nums[start]<<" "<<nums[end]<<"<<\n";
                    start++;
                    while((start < end) && (nums[start] == nums[start-1])) start++;
                }
                else{
                    // cout<<i<<" "<<nums[i]<<" "<<nums[start]<<" "<<nums[end]<<">>\n";
                    end--;
                    while((start < end) && (nums[end] == nums[end+1])) end--;
                }
            }

            i++;
            while((i < nums.size()) && (nums[i] == nums[i-1])) i++;
        }
        return ans;
    }
};