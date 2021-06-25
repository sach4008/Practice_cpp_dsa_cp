class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int cnt=1,j=0;
        string temp;
        for(int i=0;i<(n-1);i++){
            if(chars[i]!=chars[i+1]){
                chars[j]=chars[i];
                j++;
                temp=to_string(cnt);
                if(cnt!=1)
                    for(int k=0;k<temp.length();k++) {
                        chars[j]=temp[k];
                        j++;
                    }
                cnt=0;
            }
            cnt++;
        }
        chars[j]=chars[n-1];
        j++;
        temp=to_string(cnt);
        if(cnt!=1)
            for(char x: temp) {
                chars[j]=x;
                j++;
            }
        return j;
    }
};
