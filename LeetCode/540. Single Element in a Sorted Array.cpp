class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int ans=0;
        
        int i=0,j=nums.size()-1;
        while(i<j){
            int mid=i+(j-i)/2;
            
            if(!(mid&1)){
                if(nums[mid]==nums[mid+1]){
                    i=mid+1;
                }
                else{
                    j=mid;
                }
            }
            else{
                if(nums[mid]==nums[mid-1]){
                    i=mid+1;
                }
                else{
                    j=mid;
                }
            }
        }
        
        return nums[i];
    }
};




// class Solution {
// public:
//     int singleNonDuplicate(vector<int>& nums) {
        
//         int ans=0;
        
//         for(auto x: nums){
//             ans=(ans xor x);
//         }
        
//         return ans;
//     }
// };
