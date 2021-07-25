class Solution {
public:
    vector<int> plusOne(vector<int>& A) {
        int length=A.size();
        if(A[length-1]!=9){
            A[length-1]+=1;
            return A;
        }
    
        for(int it=length-1;it>=0;it--){
            A[it]=0;
            if(it==0){
                A.insert(A.begin(),1);
                return A;
            }
            if(A[it-1]!=9){
                A[it-1]+=1;
                return A;
            }
        }
        return A;
    }
    
};
