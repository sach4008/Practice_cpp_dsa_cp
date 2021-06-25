

// O(nlogn) solution

class Solution {
public:
    
    bool lexicoCompare(int a,int b){
        return ((to_string(a)+to_string(b))>(to_string(b)+to_string(a)));
    }
    
    string largestNumber(vector<int>& nums) {
        string ans;
        
        sort(nums.begin(), nums.end(), [this](int a, int b){
             return (lexicoCompare(a,b));
        });
        
        for(int i=0;i<nums.size();i++){
            ans+=(to_string(nums[i]));
        }
        while(ans[0]=='0'&&ans.size()>1) ans.erase(0,1);
        return ans;
    }
};
