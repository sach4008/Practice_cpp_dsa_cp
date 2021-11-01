class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int start = 0,end = nums.size()-1;
        
        while(start<end){
            int mid = start+(end-start)/2;
            
            if(nums[mid] < target){
                start = mid+1;
            }
            else{
                end = mid;
            }
        }
        if(nums[start]<target){
            return start+1;
        }
        return start;
    }
};