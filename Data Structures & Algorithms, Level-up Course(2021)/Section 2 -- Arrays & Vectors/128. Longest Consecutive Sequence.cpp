
//O(n) space complexity O(n) time complexity

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int len=nums.size();
        unordered_set<int> rs;
        if(len<1) return 0;
        for(int i=0;i<len;i++){
            rs.insert(nums[i]);
        }
        int a=0,b=0;
        for(int i=0;i<len;i++){
            if(rs.find(nums[i]-1)==rs.end()){
                b=0;int temp=nums[i];
                while(rs.find(temp)!=rs.end()) {
                    temp++;
                    b++;
                }
                a=max(a,b);
            }
        }
        return a;
    }
};
