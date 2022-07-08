class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<vector<int>> v(n);
        int len = roads.size();
        
        for(int i=0;i<len;i++){
            v[roads[i][0]].push_back(roads[i][1]);
            v[roads[i][1]].push_back(roads[i][0]);
        }
        
        vector<int> res(n,0);
        
        for(int i=0;i<n;i++){
            res[i] = v[i].size();
        }
        sort(res.begin(),res.end());
        
        long long ans = 0;
        
        for(int i=0;i<n;i++){
            ans += (i+1)*1LL*res[i];
        }
        
        return ans;
    }
};
