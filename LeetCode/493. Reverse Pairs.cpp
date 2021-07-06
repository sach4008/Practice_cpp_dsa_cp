class Solution {
public:
    
    int merge(vector<int> &nums, int start,int end,int mid){
        int cnt=0;
        int i=start,j=mid+1;
        while(i<=mid && j<=end){
            if((long long)nums[i]>2*(long long)nums[j]){
                cnt+=(mid-i+1);
                j++;
            }
            else{
                i++;
            }
        }
        sort(nums.begin()+start,nums.begin()+end+1);
        return cnt;
    }
    
    int mergeCnt(vector<int> &nums,int start,int end){
        
        if(start>=end) return 0;
        
        int mid = start+(end-start)/2;
        
        int x=mergeCnt(nums,start,mid);
        int y=mergeCnt(nums,mid+1,end);
        
        return (merge(nums,start,end,mid)+x+y);
    }
    
    int reversePairs(vector<int>& nums) {
        int cnt=0;
        
        cnt=mergeCnt(nums,0,nums.size()-1);
        
        // for(auto x:nums) cout<<x<<" ";
        
        return cnt;
    }
};
