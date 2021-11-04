class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        bool var=true;
        int j=0;
        for(int it=left;it<=right;it++){
            var=true;
            j=it;
            while(j>0){
                if(j%10==0){
                    var=false;
                    break;
                }
                if(it%(j%10)!=0){
                    var=false;
                    break;
                }
                j/=10;
            }
            if(var){
                ans.push_back(it);
            }
        }
        return ans;
    }
};