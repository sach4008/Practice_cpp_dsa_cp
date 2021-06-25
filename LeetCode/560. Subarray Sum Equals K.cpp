class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        unordered_map<int,int> rec;
        int cnt = 0;
        rec[0]++; // to take into account those subarrays that begin with index 0
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            cnt += rec[sum-k];
            rec[sum]++;
        }
        return cnt;
    }
};
