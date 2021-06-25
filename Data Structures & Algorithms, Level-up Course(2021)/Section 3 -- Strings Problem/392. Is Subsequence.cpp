class Solution {
public:
    bool isSubsequence(string s, string t) {
        int a=s.size()-1,b=t.size()-1;
        
        while(a>=0&&b>=0){
            if(s[a]==t[b]){
                a--;b--;
            }
            else b--;
        }
        if(a==(-1)) return true;
        
        return false;
    }
};
