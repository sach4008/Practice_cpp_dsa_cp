class Solution {
public:
    int myAtoi(string s) {
        long long ans=0;
        
        long long a=1;
        int i=0;
        
        while(i<s.length() && s[i]==' '){
            i++;
        }
        if(s[i]=='-'){
            a=-1;
            i++;
        }
        else if(s[i]=='+'){
            i++;
        }
        for(;i<s.length();i++){
            if(s[i] < '0' || s[i] > '9'){
                break;
            }
            
            ans = ans*10 + (int)s[i]-(int)'0';
            if(ans*a > INT_MAX) return INT_MAX;
            else if(ans*a < INT_MIN) return INT_MIN;
        }
        ans = a*ans;
        
        if(ans > INT_MAX) return INT_MAX;
        else if(ans < INT_MIN) return INT_MIN;
        
        return ans;
    }
};