class Solution {
public:
    string multiply(string num1, string num2) {
        int m = num1.length(), n = num2.length();
        string ans = "";
        vector<int> v1;
        vector<int> v2(m,0);
        
        for(int i=m-1;i>=0;i--){
            v1.push_back(num1[i]-'0');
        }
        
        
        
        for(int i=1;i<=n;i++){
            int a = num2[n-i]-'0';
            for(int j=0;j<m;j++){
                int tmp = a*v1[j];              
                int b = i+j-1;
                if(tmp == 0 && b>=v2.size()){
                    v2.push_back(0);
                }
                while(tmp>0){
                    if(b < v2.size()){
                        v2[b] += (tmp%10);
                        tmp /=10;
                        if(v2[b]>9){
                            tmp+=v2[b]/10;
                            v2[b] %=10;
                        }
                    }
                    else {
                        v2.push_back(tmp%10);
                        tmp /=10;
                    }
                    b++;
                }
            }
        }
        int k = v2.size()-1;
        while(k>0 && v2[k] == 0) k--;
        
        for(int i=k;i>=0;i--){
            ans+=to_string(v2[i]);
        }
        return ans;
    }
};