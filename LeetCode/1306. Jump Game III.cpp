class Solution {
    bool helper(vector<int>& arr,vector<bool>& vis,int k){
        if(k<0 || k>arr.size()) return false;
        if(vis[k]) return false;
        
        vis[k] = true;
        if(arr[k]==0) return true;
        bool var = (helper(arr,vis,k-arr[k]) || helper(arr,vis,k+arr[k]));
        
        return var;
    }
public:
    bool canReach(vector<int>& arr, int start) {
        vector<bool> vis(arr.size(),false);
        return helper(arr,vis,start);
    }
};