class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int cnt = 0,lo = INT_MIN;
        
        int n = seats.size();
        int ans = 0;
        
        for(int i=0;i<n;i++){
            if(seats[i]==0) cnt++;
            else{
                if(lo == INT_MIN){
                    ans = max(ans,cnt);
                    cnt = 0;
                    lo = i;
                }
                else{
                    cnt = ceil((cnt-1)/2);
                    ans = max(ans,cnt+1);
                    cnt = 0;
                    lo = i;
                }
            }
        }
        if(seats[n-1] != 1){
            ans = max(ans,cnt);
        }
        return ans;
    }
};