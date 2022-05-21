class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        
        int len = s.size();
        string ans = "";
        
        vector<int> v(26,0);
        
        for(int i=0;i<len;i++) v[s[i]-'a']++;
        
        int j=25;
        
        while(j>=0){
            
            int res = repeatLimit;
            
            while(res>0 && v[j]>0){
                res--;
                v[j]--;
                ans += ('a'+j);
            }
            if(v[j]>0){
                int tmp = j-1;
                
                while(tmp>=0 && v[tmp]==0) tmp--;
                
                if(tmp<0) break;
                
                v[tmp]--;
                ans += (tmp+'a');
                j++;
            }
            j--;
        }
        return ans;
    }
};