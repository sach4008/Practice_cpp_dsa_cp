class Solution {
public:
    int scoreOfParentheses(string s) {
        int ans = 0;
        
        int len = s.length();
        
        stack<pair<char,int>> st;
        
        for(int i=0;i<len;i++){
            if(s[i]=='(') {
                st.push({'(',0});
                continue;
            }
            pair<char,int> pr = st.top();st.pop();
            if(pr.second == 0) pr.second = 1;
            
            if(!st.empty()){
                pair<char,int> tmp = st.top();st.pop();
                tmp.second += 2*pr.second;
                st.push(tmp);
            }
            else ans += pr.second;
        }
        
        
        return ans;
    }
};