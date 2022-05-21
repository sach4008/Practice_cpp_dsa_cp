class Solution {
    bool valid(vector<int> &time, long long tt,long long mid){
        long long cnt = 0;
        
        for(auto &x:time){
            cnt += mid/x;
            if(cnt>=tt) return true;
        }
        
        // if(cnt>=tt) return true;
        return false;
    }
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long ans = INT_MAX;
        
        long long lo = 1, hi = 1000000000000000;
        
        while(lo<=hi){
            
            long long mid = (hi+lo)/2;
            
            if(valid(time, totalTrips, mid)){
                ans = mid;
                hi = mid-1;
            }
            else lo = mid+1;
        }
        
        return ans;
    }
};