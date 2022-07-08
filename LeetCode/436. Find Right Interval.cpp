class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        map<int,int> mp;
        int n = intervals.size();
        for(int i=0;i<n;i++){
            mp.insert({intervals[i][0],i});
        }
        
        vector<int> ans(n);
        
        for(int i=0;i<n;i++){
            auto it = mp.lower_bound(intervals[i][1]);
            
            if(it != mp.end()){
                ans[i] = (*it).second;
            }
            else ans[i]=-1;
        }
        
        return ans;
    }
};
