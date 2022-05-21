class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        int sl = s.length()-1, tl = t.length()-1;
        int cs = 0,ct = 0;
        while(sl>=0 || tl >= 0){
            if(sl>=0 && s[sl]=='#'){
                cs++;
                sl--;
                continue;
            }
            if(tl>=0 && t[tl]=='#'){
                ct++;
                tl--;
                continue;
            }
            if(cs>0) {
                sl--;
                cs--;
                continue;
            }
            if(ct>0){ 
                tl--;
                ct--;
                continue;
            }
            if(sl<0 || tl<0 || (s[sl] != t[tl])){
                // cout<<sl<<tl<<"\n";
                return false;
            }
            else {
                // cout<<"dfgr";
                sl--;
                tl--;
            }
        }
        while(cs>0) {sl--;cs--;}
        while(ct>0) {tl--;ct--;}
        
        if(sl<0 && tl<0) return true;
        // cout<<"dfg";
        return false;
    }
};