class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>> ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int req=target-(nums[i]+nums[j]);
                int k=j+1,l=n-1;
                while(k<l){
                    if((nums[k]+nums[l])<req){
                        while(k<l && (nums[k]==nums[k+1]) ) k++;
                        k++;
                    }
                    else if(req<(nums[k]+nums[l])){
                        while(l>k && (nums[l]==nums[l-1]) ) l--;
                        l--;
                    }
                    else{
                        ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                        while(k<l && (nums[k]==nums[k+1]) ) k++;
                        k++;
                        while(l>k && (nums[l]==nums[l-1]) ) l--;
                        l--;
                    }
                }
                while(j<n-2 && (nums[j]==nums[j+1]) ) j++;
            }
            while(i<n-3 && (nums[i]==nums[i+1]) ) i++;
        }
        
        return ans;
    }
};
