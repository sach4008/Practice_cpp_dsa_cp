class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        
        vector<int> freq(256,0);
        
        set<char> st;
        
        for(int i=0;i<s.length();i++){
            freq[s[i]]++;
        }
        int prev = -1;
        for(int i=0;i<s.length();i++){
            freq[s[i]]--;
            st.insert(s[i]);
            if(freq[s[i]]==0){
                bool var = true;
                for(char c:st){
                    if(freq[c] != 0){
                        var = false;
                        break;
                    }
                }
                if(var){
                    ans.push_back(i-prev);
                    prev = i;
                }
            }
        }
        // if(ans.size()==0) ans.push_back(s.length());
        
        return ans;
    }
};