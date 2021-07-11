class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start=0,end=numbers.size()-1;
        vector<int> ans(2,0);
        while(start<end){
            if(numbers[start]+numbers[end]>target) end--;
            else if(numbers[start]+numbers[end]<target) start++;
            else{
                ans[0]=start+1;
                ans[1]=end+1;
                break;
            }
        }
        return ans;
    }
};
