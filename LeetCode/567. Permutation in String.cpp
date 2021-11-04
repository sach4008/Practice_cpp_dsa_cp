class Solution {
    bool helper(vector<int> &freq1,vector<int> &freq2){
        
        for(int i=0;i<26;i++){
            if(freq1[i] != freq2[i]){
                return false;
            }
        }
        
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        
        int len1 = s1.length(), len2 = s2.length();
        if(len1>len2){
            return false;
        }
        
        vector<int> freq1(26,0);
        vector<int> freq2(26,0);
        
        for(auto x:s1){
            freq1[x-'a']++;
        }
        for(int i=0;i<len1;i++){
            freq2[s2[i]-'a']++;
        }
        if(helper(freq1,freq2)){
            return true;
        }
        for(int i=len1;i<len2;i++){
            freq2[s2[i-len1]-'a']--;
            freq2[s2[i]-'a']++;
            if(freq1[s2[i]-'a'] == freq2[s2[i]-'a']){
                if(helper(freq1,freq2)){
                    return true;
                }
            }
        }
        
        return false;
    }
};