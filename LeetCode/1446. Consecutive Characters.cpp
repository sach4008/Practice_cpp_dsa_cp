class Solution {
public:
    int maxPower(string s) {
        int ans = INT_MIN,tmp=1;
        int n = s.length();
        
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1]){
                ans = max(ans,tmp);
                tmp = 1;
            }
            else tmp++;
        }
        ans = max(ans,tmp);
        
        return ans;
    }
};