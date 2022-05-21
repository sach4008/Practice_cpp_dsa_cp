class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int len = s.length();
        vector<string> ans;
        string str = "";
        set<string> st,pr;
        
        if(len<=10) return ans;
        
        for(int i=0;i<10;i++){
            str+=s[i];
        }
        st.insert(str);
        for(int i=10;i<len;i++){
            str.erase(0,1);
            str+=s[i];
            
            if(st.find(str) != st.end()){
                if(pr.find(str)==pr.end()){
                    ans.push_back(str);
                    pr.insert(str);
                }
            }
            else 
                st.insert(str);
        }
        return ans;
    }
};