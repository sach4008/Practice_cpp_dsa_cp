class Solution {
    bool check(vector<vector<char>>& matrix,int x,int y,int i,int j){
        int a = i;
        while(i>=x){
            if(matrix[i][j]!='1')return false;
            i--;
        }
        i = a;
        while(j>=y){
            if(matrix[i][j]!='1')return false;
            j--;
        }
        return true;
    }
    
    int helper(vector<vector<char>>& matrix,int i,int j){
        int cnt = 0;
        int x = i, y = j;
        int m = matrix.size(), n = matrix[0].size();

        while(x<m && y<n){
            if(check(matrix,i,j,x,y)) cnt++;
            else break;
            x++;
            y++;
        }
        return cnt;
    }
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int ans = 0;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans = max(ans,helper(matrix,i,j));
            }
        }
        return ans*ans;
    }
};