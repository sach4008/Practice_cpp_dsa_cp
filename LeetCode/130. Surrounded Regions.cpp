class Solution {
public:
    void solve(vector<vector<char>>& board) {
        
        int a = board.size();
        int b = board[0].size();
        int c=0,d=0;
        queue<pair<int,int> > q;
        
        for(int i=0;i<a;i++){
            if(board[i][0] == 'O'){
                q.push({i,0});
            }
            if(board[i][b-1] == 'O'){
                q.push({i,b-1});
            }
        }
        for(int i=0;i<b;i++){
            if(board[0][i] == 'O'){
                q.push({0,i});
            }
            if(board[a-1][i] == 'O'){
                q.push({a-1,i});
            }
        }
        
        while(!q.empty()){
            
            c = q.front().first;
            d = q.front().second;
            q.pop();
            
            board[c][d] = '3';
            
            if(d+1 < b && board[c][d+1] == 'O'){
                q.push({c,d+1});
            }
            if(d-1 >= 0 && board[c][d-1] == 'O'){
                q.push({c,d-1});
            }
            if(c+1 < a && board[c+1][d] == 'O'){
                q.push({c+1,d});
            }
            if(c-1 >= 0 && board[c-1][d] == 'O'){
                q.push({c-1,d});
            }
        }
        
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
                if(board[i][j] == '3'){
                    board[i][j] = 'O';
                }
            }
        }
        
    }
};