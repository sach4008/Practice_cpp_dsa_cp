class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int AxorB=0, masking=1,A=0;
        
        for(auto x:nums){
            AxorB ^= x;
        }
        
        while(!(AxorB&masking)) masking <<=1;
        
        for(auto x:nums){
            if(x&masking){
                A ^= x;
            }
        }
        
        return {A,AxorB^A};
    }
};