class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> mp;
        int len=nums.size();
        for(int i=0;i<len;i++){
            mp[nums[i]]++;
        }
        for(auto x:mp){
            if(x.second>len/3){
                ans.push_back(x.first);
            }
        }
        
        return ans;
    }
};



//  space complexity O(n)
//         vector<int> ans;
//         unordered_map<int,int> mp;
//         int len=nums.size();
//         for(int i=0;i<len;i++){
//             mp[nums[i]]++;
//         }
//         for(auto x:mp){
//             if(x.second>len/3){
//                 ans.push_back(x.first);
//             }
//         }
        
//         return ans;
