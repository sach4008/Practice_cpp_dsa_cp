class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int len=nums.size();
        int sum=0;
        for(int it=0;it<len;it++){
            sum+=nums[it];
        }
        int sumLeft=0,sumRight=sum-nums[0];
        if(sumRight==0){
            return 0;
        }
        for(int it=1;it<len;it++){
            sumLeft+=nums[it-1];
            sumRight-=nums[it];
            if(sumLeft==sumRight){
                return it;
            }
        }
        return -1;
    }
};