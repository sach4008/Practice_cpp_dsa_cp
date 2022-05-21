class Solution {
public:
    int longestValidParentheses(string s) {
        
        stack<pair<char,int> > st;
        st.push({')',-1});
        
        int ans = 0;
        int len = s.length();
        for(int i=0;i<len;i++){
            if(s[i]=='('){
                st.push({'(',i});
            }
            else if(s[i]==')'){
                if(!st.empty())
                    st.pop();
                
                if(st.empty()) 
                    st.push({')',i});
                else
                    ans = max(ans,i-st.top().second);
            }
        }
        
        return ans;
    }
};