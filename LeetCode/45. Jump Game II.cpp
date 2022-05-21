class Solution {
public:
    int jump(vector<int>& nums) {
        
        int cnt=0, n = nums.size();
        if(n==1) return cnt;
        int curr = 0, nmax = 0;
        int j=0;
        
        while(curr-j+1>0){
            cnt++;
            while(j<=curr){
                nmax = max(nmax,nums[j]+j);
                if(nmax>=n-1) return cnt;
                j++;
            }
            curr = nmax;
        }
        return 0;
    }
};