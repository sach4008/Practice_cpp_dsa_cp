class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> tokens;
        map<char,string> mp;
        
        // stringstream class check1
        stringstream check1(s);
        string intermediate;

        while(getline(check1, intermediate, ' '))
        {
            tokens.push_back(intermediate);
        }
        
        if(pattern.size() != tokens.size()) return false;
        
        for(int i = 0; i < tokens.size(); i++){
            if(mp.find(pattern[i]) == mp.end()){
                mp[pattern[i]] = tokens[i];
            }
            else if(mp[pattern[i]] != tokens[i]) return false;
        }
        map<string,char> pm;
        for(int i = 0; i < tokens.size(); i++){
            if(pm.find(tokens[i]) == pm.end()){
                pm[tokens[i]] = pattern[i];
            }
            else if(pm[tokens[i]] != pattern[i]) return false;
        }
        
        return true;
    }
};