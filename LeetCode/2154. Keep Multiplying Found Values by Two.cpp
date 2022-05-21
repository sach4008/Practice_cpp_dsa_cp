class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> st;
        for(int &x:nums) st.insert(x);
        
        while(true){
            if(st.find(original)==st.end()) return original;
            original*=2;
        }
        
        return original;
    }
};
