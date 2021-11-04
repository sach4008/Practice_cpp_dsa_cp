class Solution {
    vector<vector<char> > vis;
    vector<string> ans;
public:
    vector<string> letterCombinations(string digits) {
        
        if(digits.length() == 0) return ans;
        
        vis.push_back({'0'});
        vis.push_back({'0'});
        vis.push_back({'a','b','c'});
        vis.push_back({'d','e','f'});
        vis.push_back({'g','h','i'});
        vis.push_back({'j','k','l'});
        vis.push_back({'m','n','o'});
        vis.push_back({'p','q','r','s'});
        vis.push_back({'t','u','v'});
        vis.push_back({'w','x','y','z'});
        
        string str = "";
        helper(digits,0,str);
        
        return ans;
    }
private:    
    void helper(string &digits,int i,string &str){
        if(i >= digits.length()){
            ans.push_back(str);
            return ;
        }
        for(auto x:vis[digits[i]-'0']){
            str.push_back(x);
            helper(digits,i+1,str);
            str.pop_back();
        }
    }
};