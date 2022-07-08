class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        
        int n = messages.size();
        map<string,int> mp;
        
        for(int i=0;i<n;i++){
            int cnt = 1;
            for(int j=0;j<messages[i].size();j++){
                if(messages[i][j]==' ')
                    cnt++;
            }
            mp[senders[i]]+=cnt;
        }
        int maxi = INT_MIN;
        string ans;
        
        for(auto &x:mp){
            if(x.second > maxi){
                ans = x.first;
                maxi = x.second;
            }
            else if(x.second == maxi && ans < x.first){
                ans = x.first;
            }
        }
        return ans;
    }
};
