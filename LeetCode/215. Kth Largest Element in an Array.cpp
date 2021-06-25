
// Always use randamized quicksort it can improve time complexity alot;





class Solution {
public:
    
    int partition(vector<int> &nums,int start,int end){
        
        srand(time(0));
        int r=start+rand()%(end-start);
        swap(nums[r],nums[end]);
        
        int pivot=nums[end];
        int i=start-1;
        for(int j=start;j<end;j++){
            if(nums[j]<pivot){
                i++;
                swap(nums[i],nums[j]);
            }
        }
        
        swap(nums[i+1],nums[end]);
        return i+1;
    }
    
    
    int quickselect(vector<int> &nums,int st,int end,int k){
        if(st>=end) return nums[st];
        int p=partition(nums,st,end);
        
        if(p==k) return nums[p];
        else if(p<k) return quickselect(nums,p+1,end,k);
        else return quickselect(nums,st,p-1,k);
        
    }
    
    int findKthLargest(vector<int>& nums, int k) {
        int ans = quickselect(nums,0,nums.size()-1,nums.size()-k);
        
        return ans;
    }
};
