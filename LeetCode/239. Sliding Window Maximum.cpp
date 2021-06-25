class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        deque<int> dq;
        vector<int> ans;
        for (int i=0; i<nums.size(); i++) {
            if (!dq.empty() && dq.front() == i-k) dq.pop_front();
            while (!dq.empty() && nums[dq.back()] < nums[i])
                dq.pop_back();
            dq.push_back(i);
            if (i>=k-1) ans.push_back(nums[dq.front()]);
        }
        return ans;
        
    }
};


//         vector<int> res;
//         int maxi=INT_MIN;
//         int len=nums.size();
        
//         for(int i=0;i<k;i++){
//             maxi=max(maxi,nums[i]);
//         }
//         res.push_back(maxi);
//         if(k<len){
//             for(int i=k,j=0;i<len;i++,++j){
//                 if((maxi==nums[j])&&(maxi>nums[i])){
//                     maxi=INT_MIN;
//                     for(int b=j+1;b<=i;b++){
//                         maxi=max(maxi,nums[b]);
//                     }
//                     res.push_back(maxi);
//                 }
//                 else{
//                     maxi=max(maxi,nums[i]);
//                     res.push_back(maxi);
//                 }
//             }
//         }
//         return res;
