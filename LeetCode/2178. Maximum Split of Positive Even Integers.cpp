class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        
        if(finalSum %2LL != 0) return {};
        
        vector<long long> ans;
        long long curr = 2LL;
        
        while(1){
            if(finalSum <= 2*curr){
                ans.push_back(finalSum);
                break;
            }
            finalSum -= curr;
            ans.push_back(curr);
            curr += 2;
        }
        
        return ans;
    }
};