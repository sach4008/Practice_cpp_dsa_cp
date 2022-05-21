class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int ans = 0,n=nums.size();
        set<pair<int,int> > st;
        
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(abs(nums[i]-nums[j])==k){
                    if(st.find({nums[i],nums[j]})!=st.end() || st.find({nums[j],nums[i]})!=st.end()) continue;
                    st.insert({nums[i],nums[j]});
                    ans++;
                }
            }
        }
        
        return ans;
    }
};
