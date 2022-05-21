class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt = 0;
        for(auto &x:words){
            bool var = true;
            if(x.size()< pref.size()) continue;
            for(int i = 0;i<pref.size();i++){
                if(pref[i]!=x[i]){
                    var = false;
                    break;
                }
            }
            if(var) cnt++;
        }
        return cnt;
    }
};