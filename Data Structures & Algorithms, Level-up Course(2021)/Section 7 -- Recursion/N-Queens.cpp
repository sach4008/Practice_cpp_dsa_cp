#include <bits/stdc++.h>
using namespace std;

bool cudig(int row,int col,vector<string> &board,int n){
        while(row >= 0 && col >= 0) {
            if(board[row][col] == 'Q') return false;
            row--;
            col--;
        }
        return true;
    }
    bool crow(int row,int col,vector<string> &board,int n){
        while(col>=0) {
            if(board[row][col] == 'Q') return false;
            col--; 
        }
        return true;
    }
    bool cldig(int row,int col,vector<string> &board,int n){
        while(row<n && col>=0) {
            if(board[row][col] == 'Q') return false;
            row++;
            col--; 
        }
        return true;
    }



void generate(int col,vector<string> &board,vector<vector<string>> &queens,int n){
        if(col == n) {
            queens.push_back(board); 
            return; 
        }
    
        for(int row = 0;row<n;row++) {
            if(cudig(row, col, board, n)&&cldig(row, col, board, n)&&crow(row, col, board, n)) {
                board[row][col] = 'Q'; 
                generate(col+1, board, queens, n); 
                board[row][col] = '.'; 
            }
        }
    }
int nQueen(int n){
//Write your code below. Do not modify this function or parameters. You can use helper function if needed.    
    vector<vector<string>> queens;
        vector<string> board(n);
        string s(n, '.'); 
        for(int i = 0;i<n;i++) {
            board[i] = s; 
        }
         
        generate(0,board, queens, n); 
        
        // cout<<queens.size()<<" "<<n<<"\n";
        return queens.size(); 
}
