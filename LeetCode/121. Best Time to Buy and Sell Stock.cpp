class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0],max,profit=0, len=prices.size();
        if(len<2) return 0;
        for(int i=1;i<len;i++){
            max=prices[i];
            if((max-min)>profit) profit=max-min;
            if(prices[i]<min) min=prices[i];
        }
        return profit;
    }
};
