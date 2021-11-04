class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        int ans = 0, cnt = 0;
        vector<vector<bool> > vis(m,vector<bool>(n,false));
        
        stack<pair<int,int> > st;
        st.push({-1,-1});
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 1){
                    st.push({i,j});
                    st.push({-1,-1});
                }
            }
        }
        
        while(!st.empty()){
            pair<int,int> pr = st.top();
            st.pop();
            
            if(pr.first == -1 && pr.second == -1){
                ans = max(ans,cnt);
                cnt = 0;
            }
            if(pr.first < 0 || pr.first >= m){
                continue;
            }
            if(pr.second < 0 || pr.second >= n){
                continue;
            }
            if(grid[pr.first][pr.second] == 0){
                continue;
            }
            if(vis[pr.first][pr.second]){
                continue;
            }
            vis[pr.first][pr.second] = true;
            cnt++;
            st.push({pr.first+1,pr.second});
            st.push({pr.first-1,pr.second});
            st.push({pr.first,pr.second+1});
            st.push({pr.first,pr.second-1});
        }
        
        return ans;
    }
};