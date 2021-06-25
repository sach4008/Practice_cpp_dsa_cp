
// Quick Sort 
// TLE for worst case;



class Solution {
public:
    
    int partition(vector<int> &nums,int start,int end){
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
    
    void quickSort(vector<int> &nums,int start,int end){
        
        if(start>=end) return;
        
        int p=partition(nums,start,end);
        
        quickSort(nums,start,p-1);
        quickSort(nums,p+1,end);
    }
    
    vector<int> sortArray(vector<int>& nums) {
        
        quickSort(nums,0,nums.size()-1);
        
        return nums;
    }
};


