class Solution {
public:
    int longestPalindrome(string s) {
        vector<int> v(256,0);
        int len = s.length();
        
        for(int i=0;i<len;i++){
            v[s[i]]++;
        }
        
        int tmp = 0;
        
        for(int i=0;i<256;i++){
            tmp += v[i]%2;
        }
        
        if(tmp>0) return len-tmp+1;
        
        return len;
    }
};