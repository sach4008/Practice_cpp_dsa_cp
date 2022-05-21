class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int i = -1,ans = 0,j;
        int n = s.size();
        for(j=0;j<n;j++){
            if(s[j]==' '){
                if(j-i-1!=0) ans = j-i-1;
                i=j;
            }
        }
        if(j-i-1 != 0) ans = j-i-1;
        
        return ans;
    }
};