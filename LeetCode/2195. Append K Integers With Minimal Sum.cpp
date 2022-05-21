class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        long long len = nums.size();
        // cout<<len<<"\n";
        long long ans = 0;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<len;i++) cout<<nums[i]<<" ";
        cout<<"\n";
        
        int tmp = 1;
        
        for(long long i=0;i<len && k>0;i++){
            
            if(tmp>nums[i]){
                continue;
            }
            int a = min(nums[i],tmp+k);
            int b = a-tmp;
            long long c = tmp*1LL*b + b*1LL*(b-1)/2;
            k -= b;
            ans += c;
            tmp = a;
            // cout<<i<<"  "<<a<<" "<<b<<" "<<c<<" "<<tmp<<" \n";
            
            if(tmp<=nums[i])tmp++;
        }
        
        
        long long res = tmp*1LL*k + k*1LL*(k-1)/2;
        ans += res;
        
        return ans;
    }
};