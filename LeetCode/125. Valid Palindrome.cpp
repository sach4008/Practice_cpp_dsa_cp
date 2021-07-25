class Solution {
public:
    bool isPalindrome(string s) {
        int start=0,end=s.length()-1;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        while(start<end){
            
            if((((s[start]<'0')||(s[start]>'9'))&&((s[start]<'a')||(s[start]>'z')))||(s[start]==' ')) {
                start++;
                continue;
            }
            if((((s[end]<'0')||(s[end]>'9'))&&((s[end]<'a')||(s[end]>'z')))||(s[end]==' ')) {
                end--;
                continue;
            }
            if(s[start]!=s[end]) return false;
            start++;
            end--;
        }
        return true;
    }
};
