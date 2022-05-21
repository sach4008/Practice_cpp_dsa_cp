class Solution {
public:
    long long maximumSubsequenceCount(string text, string pattern) {
        long long a=0,b=0,c=0;
        
        int n = text.size();
        
        for(int i=0;i<n;i++){
            if(text[i]==pattern[1]){
                b++;
                c += a;
            }
            if(text[i]==pattern[0]){
                a++;
            }
        }
        
        c += max(a,b);
        
        return c;
    }
};