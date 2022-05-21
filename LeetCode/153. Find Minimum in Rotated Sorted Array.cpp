class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        if(r==0 || (nums[r]>nums[l])) return nums[l];
        
        // cout<<l<<r<<"\n";
        while (l <= r) {
            int mid = l + (r-l) / 2;
            
            if (nums[mid] > nums[mid + 1])
                return nums[mid+1];
            if(nums[mid] < nums[mid-1])
                return nums[mid];
            
            if(nums[mid]>nums[0])
                l = mid + 1;
            else
                r = mid-1;
        }
        // cout<<"\n\n";
        return nums[0];
    }
};