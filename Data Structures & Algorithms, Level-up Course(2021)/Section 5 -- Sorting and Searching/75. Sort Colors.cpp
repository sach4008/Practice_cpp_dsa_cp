class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int i = 0;
        int nextZero = 0;
        int nextTwo = n - 1;

        while (i <= nextTwo)
        {
            if (nums[i] == 0)
            {
                swap(nums[i], nums[nextZero]);
                i++;
                nextZero++;
            }
            else if (nums[i] == 2)
            {
                swap(nums[i], nums[nextTwo]);
                nextTwo--;
            }
            else
            {
                i++;
            }
        }
       
    }
};


 // int a=0,b=0,c=0,len=nums.size();
        // for(int i=0;i<len;i++){
        //     if(nums[i]==0) a++;
        //     else if(nums[i]==1) b++;
        //     else c++;
        // }
        // int j=0;
        // while(a--){
        //     nums[j]=0;j++;
        // }
        // while(b--){
        //     nums[j]=1;j++;
        // }
        // while(c--){
        //     nums[j]=2;j++;
        // }
