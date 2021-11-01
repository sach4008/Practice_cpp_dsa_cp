class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int len = cost.size();
        
        int a,b,c=0;
        a = cost[0];
        b = cost[1];
        
        for(int i=3;i<=len;i++){
            c = min(a,b) + cost[i-1];
            a=b;
            b=c;
        }
        
        return min(a,b);
    }
};
/*
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int len = cost.size();
        
        vector<int> ans(len+1,0);
        ans[1] = cost[0];
        ans[2] = cost[1];
        
        for(int i=3;i<=len;i++){
            ans[i] = min(ans[i-1],ans[i-2]) + cost[i-1];
        }
        
        return min(ans[len],ans[len-1]);
    }
};
*/