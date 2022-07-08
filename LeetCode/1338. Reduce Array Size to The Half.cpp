class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        
        map<int,int> mp;
        for(int &x:arr)
            mp[x]++;
        priority_queue<int> pq;
        
        for(auto &x:mp)
            pq.push(x.second);
        
        int ans = 0;
        int rem = 0;
        
        while(rem<n/2){
            rem += pq.top();pq.pop();
            ans++;
        }
        return ans;
    }
};
