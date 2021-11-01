class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> r(256,0);
        vector<int> m(256,0);
        
        for(auto x:s){
            r[x]++;
        }
        for(auto x:t){
            m[x]++;
        }
        
        for(int i=0;i<256;i++){
            if(m[i]!=r[i]){
                return false;
            }
        }
        
        return true;
    }
};