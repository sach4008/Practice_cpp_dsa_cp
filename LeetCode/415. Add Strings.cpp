class Solution {
public:
    string addStrings(string num1, string num2) {
        int a = num1.length(), b = num2.length();
        // cout<<"st\n";
        int carry = 0,tmp;
        
        if(b>a){ swap(num1,num2); swap(a,b);}
        
        while(b>0){
            b--;
            a--;
            // cout<<"er";
            tmp = (num1[a]-'0') + (num2[b]-'0') + carry;
            
            carry = tmp/10;
            // cout<<"dfe";
            num1[a] = (tmp%10 + '0');
            // cout<<"tm";
        }
        // cout<<"ans\n";
        
        while(a>0 && carry > 0){
            a--;
            tmp = (num1[a]-'0') + carry;
            carry = tmp/10;
            num1[a] = (tmp%10 + '0');
        }
        if(carry>0) num1.insert(0,to_string(carry));
        
        return num1;
    }
};