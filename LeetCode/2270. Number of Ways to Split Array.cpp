class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        long sum = 0;
        
        for(int i=0;i<n;i++)
            sum += nums[i];
        
        int cnt = 0;
        long tmp=0;
        
        for(int i=0;i<n-1;i++){
            tmp += nums[i];
            sum -= nums[i];
            
            if(tmp>=sum)
                cnt++;
        }
        
        return cnt;
    }
};
