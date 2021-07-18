class Solution {
public:
    int reverse(int x) {
        long long ans=0,sign=1;
        long long int y=x;
        if(x<0){
            y=abs(x);
            sign=-1;
        }
        while(y>0){
            ans=ans*10+y%10;
            y=y/10;
        }
        //ans=sign*ans;
        return (ans<INT_MIN || ans>INT_MAX) ? 0 : sign*ans;
    }
};
