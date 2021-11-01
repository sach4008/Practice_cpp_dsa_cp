class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){
            return "";
        }
        int len = INT_MAX;
        for(auto x:strs){
            if(len>x.length()){
                len = x.length();
            }
        }
        
        string ans = "";
        
        for(int i=0;i<len;i++){
            char c = strs[0][i];
            bool var = false;
            for(int j=1;j<strs.size();j++){
                if(strs[j][i]!=c){
                    var = true;
                    break;
                }
            }
            
            if(var){
                break;
            }
            ans = ans + c;
        }
        
        return ans;
    }
};