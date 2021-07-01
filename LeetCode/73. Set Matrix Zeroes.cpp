class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        bool isCol=false;
        bool isRow=false;
        // if(matrix[0][0] == 0) isRow=true;
        for(int i=0;i<m;i++){
            if (matrix[i][0] == 0) {
                isCol = true;
            }
            for(int j=1;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if((matrix[i][0]==0)||(matrix[0][j]==0)){
                    matrix[i][j]=0;
                }
            }
        }
        if (matrix[0][0] == 0) {
            for (int j = 0; j < n; j++) {
                matrix[0][j] = 0;
            }
        }
        if(isCol){
            for (int j = 0; j < m; j++) {
                matrix[j][0] = 0;
            }
        }
    }
};


// used additional memory
// class Solution {
// public:
    
//     void makeZero(vector<vector<int>>& matrix,int m,int n){
//         for(int i=0;i<matrix.size();i++){
//             matrix[i][n]=0;
//         }
//         for(int i=0;i<matrix[0].size();i++){
//             matrix[m][i]=0;
//         }
//         return;
//     }
    
//     void setZeroes(vector<vector<int>>& matrix) {
//         vector<pair<int,int>> tmp;
        
//         int m=matrix.size();
//         int n=matrix[0].size();
        
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(matrix[i][j]==0){
//                     tmp.push_back({i,j});
//                 }
//             }
//         }
        
//         for(auto x:tmp){
//             makeZero(matrix,x.first,x.second);
//         }
//         return;
//     }
// };
