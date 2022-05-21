class Solution {
public:
    int addDigits(int num) {
        
        while(true){
            if(num/10==0){
                return num;
            }
            int tmp = num;
            num=0;
            while(tmp>0){
                num += tmp%10;
                tmp /= 10;
            }
        }
        
        return num;
    }
};
