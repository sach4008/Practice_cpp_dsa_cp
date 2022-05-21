class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<bool> vis(n,false);
        vis[source] = true;
        
        vector<vector<int>> res(n);
        
        for(auto &x:edges){
            res[x[0]].push_back(x[1]);
            res[x[1]].push_back(x[0]);
        }
        
        queue<int> q;
        
        q.push(source);
        
        while(!q.empty()){
            int tmp = q.front();q.pop();
            
            for(auto &r:res[tmp]){
                if(!vis[r]){
                    q.push(r);
                    vis[r] = true;
                }
            }
        }
        
        return vis[destination];
    }
};