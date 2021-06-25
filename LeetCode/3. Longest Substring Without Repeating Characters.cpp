class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        vector<int> hash(256,0);
        
        int p1=0,p2=0;
        int res=0,count=0;
        
        while(p2<s.size()){
            if(hash[s[p2]]>0) count++;
            hash[s[p2]]++;
            p2++;
            while(count>0){
                if(hash[s[p1]]>1) count--;
                hash[s[p1]]--;
                p1++;
            }
            res = max(res,p2-p1);
        }
        
        
        return res;
    }
};
