class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        int n = digits.size();
        vector<int> ans;
        set<int> st;
        
        for(int i=0;i<n;i++){
            int tmp1 = digits[i];
            if(tmp1==0) continue;
            
            for(int j=0;j<n;j++){
                if(j==i) continue;
                int tmp2 = tmp1 * 10+digits[j];
                for(int k=0;k<n;k++){
                    if(k==i || k==j) continue;
                    if(digits[k]%2 == 0){
                        int tmp3 = tmp2*10 + digits[k];
                        st.insert(tmp3);
                    }
                }
            }
        }
        
        for(int x:st) ans.push_back(x);
        
        return ans;
    }
};