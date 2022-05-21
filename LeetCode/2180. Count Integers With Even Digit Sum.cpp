class Solution {
    bool check(int n){
        int sum=0;
        
        while(n>0){
            sum += n%10;
            n/=10;
        }
        
        if(sum%2==0) return true;
        return false;
    }
public:
    int countEven(int num) {
        
        int ans = 0;
        
        for(int i=2;i<=num;i++){
            if(check(i)) ans++;
        }
        return ans;
    }
};