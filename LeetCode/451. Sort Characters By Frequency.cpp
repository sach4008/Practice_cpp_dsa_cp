class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int,char> > v(256);
        
        for(int i=0;i<256;i++){
            v[i].first = 0;
            v[i].second = (char)i;
        }
        
        for(auto x:s){
            v[x].first++;
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        
        string ans = "";
        
        for(int i=0;i<256;i++){
            while(v[i].first--){
                ans+=v[i].second;
            }
        }
        
        return ans;
    }
};