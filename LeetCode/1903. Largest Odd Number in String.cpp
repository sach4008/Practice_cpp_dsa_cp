
// Link to problem

//     https://leetcode.com/problems/largest-odd-number-in-string/



class Solution {
public:
    string largestOddNumber(string num) {
        int len=num.size()-1;
        for(int i=len;i>=0;i--){
            int temp = num[i]-'0';
            if(temp%2==0){
                num.pop_back();
            }
            else return num;
        }
        return num;
    }
};
