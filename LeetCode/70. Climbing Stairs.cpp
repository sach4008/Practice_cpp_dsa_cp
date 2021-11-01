class Solution {
public:
    int climbStairs(int n) {
        int a=0,b=1,c=1;
        
        while(n--){
            c=b+a;
            a=b;
            b=c;
        }
        return c;
    }
};

/*
class Solution {
    int helper(int n,vector<int> &vis){
        if(vis[n-1] == -1){
            vis[n-1] = helper(n-1,vis);
        }
        if(vis[n-2] == -1){
            vis[n-2] = helper(n-2,vis);
        }
        
        return vis[n-1] + vis[n-2] ;
    }
public:
    int climbStairs(int n) {
        if(n==1){
            return n;
        }
        
        vector<int> vis(n+1,-1);
        vis[0]=vis[1]=1;
        
        return helper(n,vis);
    }
};
*/