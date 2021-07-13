#include<bits/stdc++.h>
using namespace std;

bool isValid(vector<vector<int>>& board, int row, int col, int c){
        for(int i = 0; i < 9; i++) {
            if(board[i][col] == c) 
                return false; 
            
            if(board[row][i] == c) 
                return false; 
            
            if(board[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3] == c) 
                return false; 
        }
        return true;
    }
    bool solve(vector<vector<int>>& board){
       for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]==0){
                    for(int k=1;k<=9;k++){
                        if(isValid(board, i, j, k)){
                            board[i][j]=k;
                            if(solve(board))
                                return true;
                            else 
                                board[i][j]=0;
                        }
                    }
                    return false;
                }
            }
        } 
        return true;
    }
vector<vector<int> > solveSudoku(vector<vector<int> > input){
    solve(input);
    
    return input;
    
    
}
