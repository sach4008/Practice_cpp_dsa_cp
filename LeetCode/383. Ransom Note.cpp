class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        vector<int> r(256,0);
        vector<int> m(256,0);
        
        for(auto x:ransomNote){
            r[x]++;
        }
        for(auto x:magazine){
            m[x]++;
        }
        
        for(int i=0;i<256;i++){
            if(m[i]<r[i]){
                return false;
            }
        }
        
        return true;
    }
};