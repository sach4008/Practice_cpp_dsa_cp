
// O(logN);


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();
        
        int st=0, et=(row-1)*col + (col-1);
        int mid=0,i=0,j=0;
        while (st<=et){
            mid=(st+et)/2;
            i=mid/col;
            j=mid%col;
            
            if(matrix[i][j]==target){
                return true;
            }
            else if(matrix[i][j]<target){
                st=mid+1;
            }
            else{
                et=mid-1;
            }
        }
        
        return false;
    }
};
