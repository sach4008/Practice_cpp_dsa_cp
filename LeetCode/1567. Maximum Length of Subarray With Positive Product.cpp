class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int n = nums.size();
        
        int ans = 0, cnt = 0, tmp = 0, pos = -1;
        
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                cnt = 0;
                tmp = 0;
                pos = -1;
                continue;
            }
            if(nums[i] < 0){
                tmp++;
            }
            if(tmp == 1 && pos == -1) pos = i;
            
            cnt++;
            
            if(tmp%2 == 0){
                ans = max(ans,cnt);
            }
            else{
                ans = max(ans,i-pos);
            }
        }
        
        return ans;
    }
};