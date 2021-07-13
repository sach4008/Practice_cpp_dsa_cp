#include<bits/stdc++.h>
using namespace std;

bool solve(int i,int j,int n,vector<vector<char>> &c,vector<int> &ans){
        
        if(i>=n || j>=n || c[i][j]=='X'){
            return false;
        }
        if((i==n-1) && (j==n-1)){
            ans.push_back(i*n + j+1);
            // ans.push_back(res);
            return true;
        }
        
        ans.push_back(i*n + j+1);
        bool var1=solve(i+1,j,n,c,ans);
        bool var2=solve(i,j+1,n,c,ans);
    
        bool var = (var1||var2);
        if(!var) ans.pop_back();
        
        return var;
    }
    
vector<int> findPath(int n, vector<vector<char>> c){
    ////Write your code below. Do not modify this function or parameters. You can use helper function if needed.   
        vector<int> ans;
        solve(0,0,n,c,ans);
        return ans;
}
