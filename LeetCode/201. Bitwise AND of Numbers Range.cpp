class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        
        if(left==0) return 0;
        
        long long l = (int)log2(left);
        long long r = (int)log2(right);
        
        long long ans = left;
        
        if(l==r){
            // return pow(2,l);
            for(long long i=left;i<=right;i++){
                ans=ans&i;
            }
        }
        else{
            return 0;
        }
        
        return ans;
    }
};