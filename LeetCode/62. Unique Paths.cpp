class Solution {
public:
    int uniquePaths(int m, int n) {
        
        int res=n+m-2;
        double ans=1;
        
        int r=m-1;
        
        for(int i=1;i<=r;i++){
            ans=ans*(res-r+i)/i;
        }
        
        return (int)ans;
    }
};
