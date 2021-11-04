class Solution {
    void helper(vector<string> &ans,string &str,int i){
        
        if(i>=str.length()){
            ans.push_back(str);
            return;
        }
        helper(ans,str,i+1);
        
        if(str[i]>='a' && str[i]<='z'){
            str[i] = str[i]-32;
            helper(ans,str,i+1);
            str[i] = str[i]+32;
        }
        if(str[i]>='A' && str[i]<='Z'){
            str[i] = str[i]+32;
            helper(ans,str,i+1);
            str[i] = str[i]-32;
        }
    }
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        
        helper(ans,s,0);
        
        return ans;
    }
};