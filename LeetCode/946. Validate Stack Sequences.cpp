class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        stack<int> st;
        
        int len = pushed.size();
        
        int i=0;
        
        for(int j=0;j<len;){
            while((!st.empty()) && st.top()==popped[i]){
                st.pop();
                i++;
            }
            st.push(pushed[j]);
            j++;
        }
        while((!st.empty()) && st.top()==popped[i]){
            st.pop();
            i++;
        }
        if(st.empty()) return true;
        
        return false;
    }
};