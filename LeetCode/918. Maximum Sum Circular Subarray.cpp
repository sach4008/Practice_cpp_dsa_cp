class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = 0, maxSum = nums[0];
        int curMax = 0, minSum = nums[0], curMin = 0;
        for (int& a : nums) {
            curMax = max(curMax + a, a);
            maxSum = max(maxSum, curMax);
            curMin = min(curMin + a, a);
            minSum = min(minSum, curMin);
            total += a;
        }
        return maxSum > 0 ? max(maxSum, total - minSum) : maxSum;
    }
};



// Wrong Solution

// class Solution {
// public:
//     int maxSubarraySumCircular(vector<int>& nums) {
//         int sum = INT_MIN,ms=nums[0];
//         int i=0,j=0;
//         int n = nums.size();
        
//         for(i=0;i<2*n-1;i++){
//             if(sum <= 0 && i<n) {
//                 sum = nums[i%n];
//                 j=i;
//                 ms = max(ms,sum);
//                 continue;
//             }
//             if((i>=n) && (i%n >= j)) {
//                 sum -= nums[j];
//                 j++;
//             }
//             ms = max(ms,sum);
//             sum+=nums[i%n];
//             ms = max(ms,sum);
//         }
        
//         // ms = max(ms,sum);
//         return ms;
//     }
// };