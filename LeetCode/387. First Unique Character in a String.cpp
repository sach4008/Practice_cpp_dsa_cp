class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> vis(257,0);
        
        queue<pair<char,int> > q;
        
        for(int i=0;i<s.length();i++){
            if(vis[s[i]]==0){
                q.push({s[i],i});
            }
            vis[s[i]]++;
        }
        
        while(!q.empty()){
            // cout<<q.front().first<<q.front().second<<"\n";
            if(vis[q.front().first]==1){
                return q.front().second;
            }
            q.pop();
        }
        
        return -1;
    }
};