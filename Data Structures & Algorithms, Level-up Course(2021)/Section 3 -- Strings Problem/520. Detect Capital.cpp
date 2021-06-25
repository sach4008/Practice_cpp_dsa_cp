class Solution {
public:
    bool detectCapitalUse(string word) {
        int len=word.size();
        if(len<2) return true;
        bool var=true;
        
        if(word[0]>'Z'){
            for(int i=0;i<len;i++){
                if(word[i]<'a'){
                    return false;
                }
            }
            return true;
        }
        for(int i=1;i<len-1;i++){
            if(word[i]>'Z'&&word[i+1]>'Z')
                continue;
            else if(word[i]<'a'&&word[i+1]<'a')
                continue;
            else
                return false;
        }
        return true;
    }
};
