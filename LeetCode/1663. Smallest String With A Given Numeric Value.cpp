class Solution {
public:
    string getSmallestString(int n, int k) {
        string ans = "";
        
        while(n){
            int tmp = k-n+1;
            char x;
            // cout<<tmp;
            
            if(tmp>=26)
                x = 'z';
            else
                x = 'a' + tmp - 1;
            k -= (int)(x-'a'+1);
            
            ans += x;
            n--;
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};