class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt = 0, tmp = 0;
        
        for(auto x:s){
            if(x=='L'){
                tmp++;
            }
            else{
                tmp--;
            }
            if(tmp == 0) cnt++;
        }
        
        return cnt;
    }
};