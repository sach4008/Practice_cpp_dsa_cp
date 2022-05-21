class Solution {
public:
    int halveArray(vector<int>& nums) {
        priority_queue<double> pq;
        
        double sum=0;
        double reqSum = 0;
        // fixed; setprecision(4);
        for(auto &x:nums) {
            pq.push((double)x);
            sum += (double)x;
        }
        
        reqSum = sum/2.0;
        int cnt = 0;
        
        while(sum>reqSum){
            double x = pq.top(); pq.pop();
            
            sum -= (x/2.0);
            
            pq.push(x/2.0);
            
            cnt++;
            
            // cout<<x<<" "<<sum<<" "<<reqSum<<"\n";
        }
        // cout<<sum<<" "<<reqSum<<"\n\n";
        
        return cnt;
    }
};