class Solution {
    vector<vector<int>> ans;
public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        
        vector<bool> vis(n,0);
        vector<int> disc(n,0);
        vector<int> low(n,0);
        vector<int> parent(n,-1);
        int time = 0;
        
        vector<vector<int>> edge(n);
        
        for(auto &x:connections){
            edge[x[0]].push_back(x[1]);
            edge[x[1]].push_back(x[0]);
        }
        // for(int i=0;i<n;i++)
            fun(edge,vis,disc,low,parent,0,time);
        
        return ans;
    }
    
    
    void fun(vector<vector<int>>& edge, vector<bool>& vis, vector<int>& disc, vector<int>& low, vector<int>& parent, int node, int &time){
        vis[node] = true;
        low[node] = disc[node] = time++;
        
        for(auto av:edge[node]){
            if(!vis[av]){
                parent[av] = node;
                fun(edge,vis,disc,low,parent,av,time);
                low[node] = min(low[node],low[av]);
                
                if(low[av]>disc[node]){
                    ans.push_back({node,av});
                }
            }
            else if(av!=parent[node]){
                low[node] = min(low[node],disc[av]);
            }
        }
    }
};
