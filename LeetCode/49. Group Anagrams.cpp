class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string> > ans;
        map<string,int> mp;
        
        for(int i=0;i<strs.size();i++){
            string x = strs[i];
            sort(x.begin(),x.end());
            
            if(mp.find(x) == mp.end()){
                mp.insert({x,ans.size()});
                ans.push_back({strs[i]});
            }
            else{
                ans[mp[x]].push_back(strs[i]);
            }
        }
        
        return ans;
    }
};