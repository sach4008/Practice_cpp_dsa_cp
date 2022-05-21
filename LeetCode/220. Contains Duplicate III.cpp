class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        map<long,long> mp;
        int n = nums.size();
        
        for(int i=0;i<min(k,n);i++){
            mp[nums[i]]++;
        }
        int lo = 0,up = 2*k;
        
        for(int i=0;i<n;i++){
            if(i+k<n)
                mp[nums[i+k]]++;
            mp[nums[i]]--;
            auto it = mp.lower_bound(nums[i]+0LL-t);
            
            if((*it).first<=nums[i]+0LL+k && mp[(*it).first]>0)
                return true;
            
            if(i-k>=0)
                mp[nums[i-k]]--;
            mp[nums[i]]++;
        }
        
        return false;
    }
};
