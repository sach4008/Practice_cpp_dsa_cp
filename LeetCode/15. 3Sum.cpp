// Approach is using two pointers technique;
// O(n^2) time complexity;

class Solution {
public: vector<vector<int> > threeSum(vector<int>& nums) {
    if(nums.size() <=2) return {};
    vector<vector<int> > rtn;
    sort(nums.begin(), nums.end());
    
    for(int i =0; i < nums.size();){
        int start = i+1, end = nums.size()-1;

        while(start < end){
            if(nums[i]+nums[start]+nums[end] == 0){
                rtn.push_back({nums[i],nums[start],nums[end]});
                start++;
                end--;
                while((start < end) && nums[start] == nums[start-1]) start++;
                while((start < end) && nums[end] == nums[end+1]) end--;

            }else if(nums[i]+nums[start]+nums[end]<0){
                start++;
                while((start < end) && nums[start] == nums[start-1]) start++;
            }else{
                end--;
                while((start < end) && nums[end] == nums[end+1]) end--;
            }
        }
        
        i++;
        while((i < nums.size()) && nums[i] == nums[i-1])
            i++;
        
    }
    return rtn;
}
    
};

// O(n^3)
// class Solution {
// public: vector<vector<int>> threeSum(vector<int>& nums) {
//         vector<vector<int>> ans;
//         int len=nums.size();
//         if(len<3){
//             return ans;
//         }
//         sort(nums.begin(),nums.end());
//         vector<int> temp(3,INT_MIN);
//         for(int i=0;i<len-2;i++){
//			   if(i!=0) if(nums[i]==nums[i-1]) continue;
//             for(int j=i+1;j<len-1;j++){
//                 for(int k=j+1;k<len;k++){
//                     if(nums[i]+nums[j]+nums[k]==0){
//                         if(temp[0]==nums[i]&&temp[1]==nums[j]&&temp[2]==nums[k]){
//                             continue;
//                         }
//                         temp[0]=nums[i];
//                         temp[1]=nums[j];
//                         temp[2]=nums[k];
//                         ans.push_back(temp);
//                     }
//                 }
//             }
//         }
//         return ans;
//     }
// };

