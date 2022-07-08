class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();
        priority_queue<int> pq;
        
        for(int &x:nums)
            pq.push(x);
        
        for(int i=1;i<n;i++){
            nums[i]=pq.top();
            pq.pop();
            i++;
        }
        for(int i=0;i<n;i++){
            nums[i]=pq.top();
            pq.pop();
            i++;
        }
    }
};
