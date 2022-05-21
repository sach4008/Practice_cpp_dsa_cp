class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int,vector<int>> gp;
        
        for(auto &x:edges){
            gp[x[0]].push_back(x[1]);
            gp[x[1]].push_back(x[0]);
        }
        
        int ans = -1,mx = 0;
        
        for(auto &x:gp){
            if((x.second).size() > mx){
                mx = (x.second).size();
                ans = x.first;
            }
        }
        
        return ans;
    }
};