class Solution {
    bool check(vector<int> &a,vector<int> &b){
        for(int i=0;i<26;i++){
            if(a[i]!=0 && b[i]!=0)
                return false;
        }
        return true;
    }
public:
    int maxProduct(vector<string>& words) {
        int n=words.size();
        vector<vector<int>> v(n,vector<int>(26,0));
        
        for(int i=0;i<n;i++){
            for(auto &x:words[i]){
                v[i][x-'a']++;
            }
        }
        int ans = 0;
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(check(v[i],v[j])){
                    ans = max(ans,(int)words[i].size()*(int)words[j].size());
                }
            }
        }
        
        return ans;
    }
};
