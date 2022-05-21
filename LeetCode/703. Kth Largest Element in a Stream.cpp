class KthLargest {
    priority_queue<int,vector<int>,greater<int>> pq;
    int K;
public:
    KthLargest(int k, vector<int>& nums) {
        K=k;
        for(int &x:nums){
            if(pq.size()==k){
                if(pq.top()<=x) {
                    pq.push(x);
                    pq.pop();
                }
            }
            else pq.push(x);
        }
    }
    
    int add(int val) {
        if(pq.size() == K){
            if(pq.top()<=val) {
                pq.push(val);
                pq.pop();
            }
        }
        else pq.push(val);
        return pq.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
