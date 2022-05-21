class Solution {
    int n,m,len;
    
    bool helper(vector<vector<char>>& board, string word, int it, int i, int j,vector<vector<bool>>& vis){
        
        if(it==len) return true;
        if(i<0 || i>=n || j<0 || j>=m) return false;
        
        if(vis[i][j]) return false;
        
        if(board[i][j]!=word[it]) return false;
        
        bool var = false;
        vis[i][j] = true;
        var = var | helper(board,word,it+1,i+1,j,vis);
        var = var | helper(board,word,it+1,i-1,j,vis);
        var = var | helper(board,word,it+1,i,j+1,vis);
        var = var | helper(board,word,it+1,i,j-1,vis);
        vis[i][j] = false;
        return var;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        n = board.size();
        m = board[0].size();
        len = word.size();
        
        bool var = false;
        vector<vector<bool>> vis(n,vector<bool> (m,false));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                    var = var | helper(board,word,0,i,j,vis);
                }
            }
        }
        
        return var;
    }
};