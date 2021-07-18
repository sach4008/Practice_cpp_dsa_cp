class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || (x%10 == 0 && x!=0)){
            return false;
        }
        
        int n=0;
        
        while(x>n){
            n=n*10+x%10;
            
            x=x/10;
            
        }
        // cout<<n<<" "<<x;
        if(n==x || x==n/10){
            return true;
        }
        else return false;
    }
};
