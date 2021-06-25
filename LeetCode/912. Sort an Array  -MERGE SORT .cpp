class Solution {
public:
    void merge(vector<int> &nums,int s,int e){
        vector<int> temp;
        int i=s,j=(s+e)/2;
        int k=j+1;
        while(i<=j&&k<=e){
            if(nums[i]<nums[k]) {
                temp.push_back(nums[i]);
                i++;
            }
            else {
                temp.push_back(nums[k]);
                k++;
            }
        }
        while(i<=j){
            temp.push_back(nums[i]);
            i++;
        }
        while(k<=e){
            temp.push_back(nums[k]);
            k++;
        }
        for(int id=s;id<=e;id++){
            nums[id]=temp[id-s];
        }
    }
    void mergeSort(vector<int> &nums,int s,int e){
        if(s>=e) return;
        
        int mid=(s+e)/2;
        mergeSort(nums,s,mid);
        mergeSort(nums,mid+1,e);
        merge(nums,s,e);
    }
    
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};
