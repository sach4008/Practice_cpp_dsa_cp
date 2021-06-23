class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n,1);
        
        vector<int> res(n,1);
        res[n-1]=1;
        for(int i=n-2;i>=0;i--){
            res[i]=res[i+1]*nums[i+1];
        }
        // output[0]=res[0];
        int prev=1;
        for(int i=0;i<n;i++){
            output[i]=res[i]*prev;
            prev*=nums[i];
        }
        return output;
         
    }
};


// int len = nums.size();

//         vector<int> out(len);
//         out[len-1] = nums[len-1];

//         for (int i = len-2; i >= 0; i--) {

//             out[i] = out[i+1] * nums[i];

//         }
//         out[0] = out[1];

//         int prod_so_far = nums[0];

//         for (int i = 1; i < len-1; i++) {

//             out[i] = prod_so_far * out[i+1];

//             prod_so_far *= nums[i];

//         }

//         out[len-1] = prod_so_far;

        

//         return out;
