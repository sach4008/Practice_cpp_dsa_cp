class Solution {
public:
    string countAndSay(int n) {
        if (n == 0) return "";
        
        string ans = "1";
        while (--n) {
            string tmp = "";
            for (int i = 0; i < ans.size(); i++) {
                int count = 1;
                 while ((i + 1 < ans.size()) && (ans[i] == ans[i + 1])){
                    count++;    
                    i++;
                }
                tmp += to_string(count) + ans[i];
            }
            ans = tmp;
        }
        return ans;
    }
};