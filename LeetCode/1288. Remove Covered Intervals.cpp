bool com(vector<int> a,vector<int> b){
    if(a[0] < b[0]) return true;
    else if(a[0]==b[0]) return a[1] > b[1];
    else return false;
}

class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int ans = 1;
        
        sort(intervals.begin(),intervals.end(),com);
        
        // for(auto x:intervals) cout<<x[0]<<" "<<x[1]<<"\n";
        // cout<<"\n\n";
        
        int a = intervals[0][0], b = intervals[0][1];
        
        for(int i=1;i<intervals.size();i++){
            int c = intervals[i][0], d = intervals[i][1];
            
            if(a<=c && d<=b){
                continue;
            }
            else{
                if(d>b) {
                    a=c;
                    b=d;
                }
                ans++;
            }
        }
        return ans;
    }
};