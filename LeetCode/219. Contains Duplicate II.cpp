class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> mp;
        int n = nums.size();
        
        for(int i=0;i<min(k,n);i++){
            mp[nums[i]]++;
        }
        int lo = 0,up = 2*k;
        
        for(int i=0;i<n;i++){
            if(i-k>=0)
                mp[nums[i-k]]--;
            if(i+k<n)
                mp[nums[i+k]]++;
            
            if(mp[nums[i]] >1)
                return true;
        }
        
        return false;
    }
};
