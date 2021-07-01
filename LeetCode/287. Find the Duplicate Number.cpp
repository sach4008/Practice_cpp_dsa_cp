class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        int slow=nums[0],fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        
        slow=nums[0];
        while(fast!=slow){
            fast=nums[fast];
            slow=nums[slow];
        }
        return slow;
        
    }
};



// Hashing 
//         int len = nums.size();
//         for (int i = 0; i < len; i++) {
//             if (nums[abs(nums[i])] < 0)
//                 return abs(nums[i]);
//             nums[abs(nums[i])] *= -1;
//         }
//         return -1;
