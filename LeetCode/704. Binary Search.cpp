class Solution {
public:
    int search(vector<int>& nums, int target) {
        
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
            return start;
        }
        else return -1;
    }
};