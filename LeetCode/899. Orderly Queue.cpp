class Solution {
public:
    string orderlyQueue(string s, int k) {
        int len = s.length();
        
        // if k will be greater than 1 then anyway we will get the sort string in finite number of steps
        if(k != 1){
            sort(s.begin(),s.end());
            return s;
        }
        
        // if k will be equal to 1 than we will try all possible valid permutation than take minimum 
        string ans = s;
        for(int i=0;i<len;i++){
            s = s.substr(1,len) + s.substr(0,1);
            ans = min(ans,s);
        }
        return ans;
    }
};
