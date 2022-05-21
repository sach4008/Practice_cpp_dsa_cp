class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int n = s.length();
        vector<int> freq(26,0);
        for(auto x:p){
            freq[x-'a']++;
        }
        vector<int> v(26,0);
        
        int j = 0,i=0;
        
        while(i<n){
            if(i<j){
                i++;
                continue;
            }
            v[s[i]-'a']++;
            if(v[s[i]-'a']>freq[s[i]-'a']){
                if(i!=j)v[s[j]-'a']--;
                j++;
                v[s[i]-'a']--;
                i--;
            }
            else if(v[s[i]-'a']==freq[s[i]-'a']){
                bool var = true;
                for(int k = 0;k<26;k++){
                    if(freq[k]!=v[k]){
                        var = false;
                        break;
                    }
                }
                if(var) ans.push_back(j);
            }
            i++;
        }
        return ans;
    }
};