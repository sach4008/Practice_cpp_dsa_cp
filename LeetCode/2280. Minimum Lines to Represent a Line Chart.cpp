class Solution {
    long double slopeG(vector<int>& a,vector<int>& b){
        int y = b[1]-a[1];
        int x = b[0]-a[0];
        
        return ((long double)y/x);
    }
    long double constant(vector<int>& a,long double slope){
        long double cons = (long double)a[1]-slope*a[0];
        
        return cons;
    }
    bool valid(vector<int>& a,long double slope,long double cons){
        long double tmp = a[1] - slope*a[0];
        if(tmp==cons)
            return true;
        else 
            return false;
    }
public:
    int minimumLines(vector<vector<int>>& stockPrices) {
        sort(stockPrices.begin(),stockPrices.end());
        int cnt = 0;
        int n = stockPrices.size();
        
        long double slope, cons;
        
        for(int i=1;i<n;i++){
            if(i!=0 && valid(stockPrices[i],slope,cons)){
                continue;
            }
            else{
                cnt++;
                slope = slopeG(stockPrices[i-1],stockPrices[i]);
                cons = constant(stockPrices[i],slope);
            }
        }
        
        return cnt;
    }
};
