class Solution {
public:
    int miceAndCheese(vector<int>& reward1, vector<int>& reward2, int k) {
        vector<pair<int,int>> v;
        
        int n = reward1.size();
        
        for(int i=0;i<n;i++){
            v.push_back({reward1[i]-reward2[i],i});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        
        int ans = 0;
        for(int i=0;i<k;i++){
            ans += reward1[v[i].second];
        }
        for(int i=k;i<n;i++){
            ans += reward2[v[i].second];
        }
        
        return ans;
    }
};