class Solution {
    int helper(vector<int> &v, int low, int high,int n){
        int tmp = 0;
        int i=1,j=n,k=0;
        
        while(n--){
            tmp = tmp*10 + i;
            i++;
        }
        while(j--) k = k*10 +1;
        
        while(tmp<=high){
            if(tmp>=low) v.push_back(tmp);
            
            if(tmp % 10 == 9)  tmp = high+1;         
            tmp += k;
            
            
        }
        return tmp;
    }
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        
        while(true){
            int tmp = low;
            int i=0;
            while(tmp>0){
                tmp/=10;
                i++;
            }
            int j = i;
            tmp = 0;
            while(j--) tmp = tmp*10+9;
            
            tmp = helper(ans,low,min(tmp,high),i);
            if(tmp>high) break;
            else low = tmp;
        }
        
        return ans;
    }
};