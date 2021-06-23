
// Approach 1

// less efficient O(n^2) time complexity

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int it=0;it<nums.size()-1;it++){
            for(int j=it+1;j<nums.size();j++){
                if(nums[it]+nums[j]==target){
                    ans.push_back(it);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
    }
};

// Approach 2

// more efficient O(n) time complexity

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> rs;
        for(int x=0;x<nums.size();x++){
            if(rs.find(target-nums[x])!=rs.end()){
                ans.push_back((rs.find(target-nums[x]))->second);
                ans.push_back(x);
                return ans;
            }
            else rs.insert({nums[x],x});
        }
        return ans;
    }
};
