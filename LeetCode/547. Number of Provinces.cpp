class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int ans = 0;
        
        int n = isConnected.size();
        
        vector<bool> vis(n,false);
        
        for(int i=0;i<n;i++){
            if(vis[i]) 
                continue;
            queue<int> q;
            q.push(i);
            
            while(!q.empty()){
                int k = q.front();q.pop();
                if(vis[k]) continue;
                vis[k] = true;
                for(int j=0;j<n;j++){
                    if(isConnected[k][j] && !vis[j]) q.push(j);
                }
            }
            ans++;
        }
        
        return ans;
    }
};