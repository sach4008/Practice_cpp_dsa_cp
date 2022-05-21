class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n+1,0),right(n+1,0);
        
        for(int i=1;i<=n;i++){
            if(nums[i-1]==0){
                left[i]=left[i-1]+1;
            }
            else left[i] = left[i-1];
            
            if(nums[n-i]==1){
                right[n-i]=right[n-i+1]+1;
            }
            else right[n-i]=right[n-i+1];
        }
        int m = INT_MIN;
        
        // for(int x:left) cout<<x<<" ";
        // cout<<"\n";
        // for(int x:right) cout<<x<<" ";
        // cout<<"\n";
        
        for(int i=0;i<=n;i++){
            left[i] += right[i];
            m = max(m,left[i]);
        }
        
        // for(int x:left) cout<<x<<" ";
        
        vector<int> ans;
        
        for(int i=0;i<=n;i++){
            if(left[i]==m) ans.push_back(i);
        }
        
        return ans;
    }
};
