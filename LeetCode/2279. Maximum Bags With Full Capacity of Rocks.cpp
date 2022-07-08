class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        priority_queue<int, vector<int>, greater<int> > pq;
        
        int n=capacity.size();
        
        for(int i=0;i<n;i++){
            pq.push(capacity[i]-rocks[i]);
        }
        
        int cnt=0;
        
        while(!pq.empty()){
            int t = pq.top();
            pq.pop();
            
            if(t<=additionalRocks){
                additionalRocks -= t;
                cnt++;
            }
            else
                break;
        }
        
        return cnt;
    }
};
