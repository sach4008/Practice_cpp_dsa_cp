class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        if(n<=2)
            return true;
        bool flag = true,var;
        
        for(int i=1; i<n-1;i++){
            if(flag==true){
                if((nums[i]-nums[i-1]>0 && nums[i+1]-nums[i]>=0)||(nums[i]-nums[i-1]>=0 && nums[i+1]-nums[i]>0)){
                    var = true;
                    flag = false;
                }
                else if((nums[i]-nums[i-1]<0 && nums[i+1]-nums[i]<=0)||(nums[i]-nums[i-1]<=0 && nums[i+1]-nums[i]<0)){
                    var = false;
                    flag = false;
                }
            }
            if(nums[i]-nums[i-1]>=0 && nums[i+1]-nums[i]>=0 && (flag || var))
                continue;
            else if(nums[i]-nums[i-1]<=0 && nums[i+1]-nums[i]<=0 &&(flag || (!var)))
                continue;
            else 
                return false;
        }
        return true;
    }
};
