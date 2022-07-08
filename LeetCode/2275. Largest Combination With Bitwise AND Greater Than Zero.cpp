class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int ans = 0;
        int n = candidates.size();
        
        int mask = 1;
        
        for(int i=0;i<30;i++){
            int cnt = 0;
            for(int j=0;j<n;j++){
                if((candidates[j] & mask) == mask)
                    cnt++;
            }
            // cout<<mask<<" "<<cnt<<"\n";
            ans = max(ans,cnt);
            mask *= 2;
        }
        return ans;
    }
};
