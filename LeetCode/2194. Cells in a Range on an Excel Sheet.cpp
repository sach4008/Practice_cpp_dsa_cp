class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> ans;
        
        char a = s[0],b = s[3];
        int c = s[1]-'0', d = s[4]-'0';
        
        // cout<<A<<B<<
        for(char i=a;i<=b;i++){
            for(int j=c;j<=d;j++){
                string tmp="";
                tmp+= i;
                tmp+= (j+'0');
                ans.push_back(tmp);
            }
        }
        
        return ans;
    }
};