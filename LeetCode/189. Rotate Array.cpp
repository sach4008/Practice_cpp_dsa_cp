class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        k=n-k;
        
        int gc=__gcd(n,k);
        
        for(int i=0;i<gc;i++){
            int tmp=nums[i];
            int j=i;
            while(1){
                int d=j+k;
                
                if(d>=n) d=d%n;
                    
                if(d==i) break;
                
                nums[j]=nums[d];
                j=d;
            }
            nums[j]=tmp;
        }
        
    }
};





// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         int len=nums.size();
//         k=k%len;
//         /*for(int i=0;i<k;i++){
//             int temp=nums[len-1];
//             for(int j=len-1;j>0;j--){
//                 nums[j]=nums[j-1];
//             }
//             nums[0]=temp;
//         }*/    //tle is coming
//         vector<int> temp;
//         for(int i=len-k;i<len;i++) temp.push_back(nums[i]);
//         for(int i=len-1;i-k>=0;i--) nums[i]=nums[i-k];
//         for(int i=0;i<k;i++) nums[i]=temp[i];
//         return;
//     }
// };
