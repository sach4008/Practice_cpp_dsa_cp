class Solution {
public:
    vector<int> countBits(int n) {
        
        vector<int> ans(n+1);
        
        ans[0] = 0;
        if(n>=1) ans[1] = 1;
        if(n>=2) ans[2] = 1;
        
        for(int i=3;i<=n;i++){
            if(i&1) ans[i] = ans[i-1]+1;
            else ans[i] = ans[i/2];
        }
        
        return ans;
    }
};




/*
class Solution {
    
    int func(int i){
        int cnt =0 ;
        
        while(i>0){
            cnt += i%2;
            i/=2;
        }
        
        return cnt;
    }
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        
        for(int i=0;i<=n;i++){
            ans.push_back(func(i));
        }
        return ans;
    }
};
*/