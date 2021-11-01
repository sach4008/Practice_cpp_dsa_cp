class Solution {
public:
    string reverseStr(string s, int k) {
        int i=0,j=0,len = s.size();
        // k = k%len;
        
        for(int m=0;m<len;m++){
            
            if(m-i+1 == 2*k){
                j=m-k;
                while(i<j){
                    swap(s[i],s[j]);
                    i++;
                    j--;
                }
                i=m+1;
            }
        }
        
        if(len-i <= k){
            j=len-1;
            // cout<<j<<"as"<<len<<s<<k<<"\n";
        }
        else{
            j=i+k-1;
            // cout<<j<<"cm"<<len<<s<<k<<"\n";
        }
        
        while(i<j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }
};