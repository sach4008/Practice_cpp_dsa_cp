class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size()==0) return {-1,-1};
        int a = -1;
        int start = 0,end = nums.size()-1;
        
        while(start<end){
            int mid = start+(end-start+1)/2;
            
            if(nums[mid] > target){
                end = mid-1;
            }
            else{
                start = mid;
            }
        }
        if(nums[start] == target){
            a = start;
        }
        else return {-1,-1};
        
        start = 0,end = nums.size()-1;
        while(start<end){
            int mid = start+(end-start+1)/2;
            
            if(nums[mid] >= target){
                end = mid-1;
            }
            else{
                start = mid;
            }
        }
        // cout<<start;
        if(nums[start] == target){
            return {start,a};
        }
        else return {start+1,a};
    }
};