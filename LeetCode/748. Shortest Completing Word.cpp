class Solution {
    bool com(vector<int> &lp,vector<int> &tmp){
        for(int i=0;i<26;i++){
            if(tmp[i]<lp[i]) return false;
        }
        return true;
    }
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        vector<int> lp(26,0);
        // cout<<"check1\n";
        for(int i=0;i<licensePlate.size();i++){
            if(licensePlate[i]>='A' && licensePlate[i] <='Z')
                licensePlate[i] += 32;
            
            if(licensePlate[i]>='a' && licensePlate[i] <='z')
                lp[licensePlate[i]-'a']++;
        }
        // cout<<"check2\n";
        string ans = "";
        int len = INT_MAX;
        
        for(int i=0;i<words.size();i++){
            vector<int> tmp(26,0);
            for(int j=0;j<words[i].size();j++)
                tmp[words[i][j]-'a']++;
            
            if(com(lp,tmp)){
                if(words[i].size()<len){
                    ans = words[i];
                    len = ans.length();
                }
            }
        }
        // cout<<"check3\n";
        return ans;
    }
};