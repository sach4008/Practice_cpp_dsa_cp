class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int cnt = 0;
        
        for(int i=1; i<nums.size()-1;i++){
            if(nums[i]>nums[i+1] && nums[i]>nums[i-1]) cnt++;
            else if(nums[i]<nums[i+1] && nums[i]<nums[i-1]) cnt++;
            else if(nums[i]==nums[i-1] && nums[i]<nums[i+1]){
                int j = i;
                
                while(j>0 && nums[j]==nums[i]) j--;
                
                if(j!=-1 && nums[j] > nums[i]) cnt++;
            }
            else if(nums[i]==nums[i-1] && nums[i]>nums[i+1]){
                int j = i;
                
                while(j>0 && nums[j]==nums[i]) j--;
                
                if(j!=-1 && nums[j] < nums[i]) cnt++;
            }
        }
        
        return cnt;
    }
};