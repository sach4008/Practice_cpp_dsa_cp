class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> v(26,0),tmp(26,0);
        
        for(auto &x:s) v[x-'a']++;
        for(auto &x:t) tmp[x-'a']++;
        
        for(int i=0;i<26;i++){
            if(tmp[i]>v[i]){
                return 'a'+i;
            }
        }
        
        return 'a';
    }
};
