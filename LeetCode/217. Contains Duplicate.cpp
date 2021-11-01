class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> st;
        
        for(auto x:nums){
            if(st.find(x) == st.end()){
                st.insert(x);
            }
            else{
                return true;
            }
        }
        
        return false;
    }
};