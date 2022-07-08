class Solution {
public:
    int percentageLetter(string s, char letter) {
        vector<int> v(26,0);
        
        int n = s.size();
        
        for(int i=0;i<n;i++){
            v[s[i]-'a']++;
        }
        
        return (v[letter-'a']*100)/n;
    }
};
