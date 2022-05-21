class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        int len = encodedText.length();
        
        string ans = "";
        
        if(len<1) return ans;
        
        int col = ceil(len / rows);
        
        for(int j=0;j<col;j++){
            int tmp = j;
            
            while(tmp<len){
                ans += encodedText[tmp];
                tmp += col+1;
            }
        }
        len = ans.length()-1;
        while(ans[len] == ' '){
            // cout<<"ds";
            ans.pop_back();
            len--;
        }
        // cout<<"\n";
        return ans;
    }
};