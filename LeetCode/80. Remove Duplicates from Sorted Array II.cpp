class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0,cnt = 0,ele = nums[0];
        
        for(int i=0;i<nums.size();i++){
            if(nums[i] == ele){
                if(cnt<2){
                    swap(nums[k],nums[i]);
                    k++;
                    cnt++;
                }
            }
            else{
                ele = nums[i];
                swap(nums[k],nums[i]);
                k++;
                cnt = 1;
            }
        }
        
        return k;
    }
};