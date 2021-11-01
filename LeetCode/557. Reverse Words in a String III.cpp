class Solution {
public:
    string reverseWords(string s) {
        
        int i=0,j=0,len = s.size();
        
        for(int k=0;k<len;k++){
            if(s[k]==' '){
                j=k-1;
                while(i<j){
                    swap(s[i],s[j]);
                    i++;
                    j--;
                }
                i=k+1;
            }
        }
        j=len-1;
        while(i<j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }
};