bool com(pair<int,int> a, pair<int,int> b){
        if(a.second < b.second) return true;
        else if(a.second == b.second) return a.first<b.first;
        else return false;
    }
class Solution {
    
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        int m = mat.size(), n = mat[0].size();
        
        vector<pair<int,int>> v(m);
        vector<int> ans;
        
        for(int i=0;i<m;i++){
            int cnt = 0;
            for(int j=0;j<n;j++){
                if(mat[i][j]==1) cnt++;
                else break;
            }
            v[i] = {i,cnt};
        }
        
        sort(v.begin(),v.end(),com);
        
        for(int i=0;i<k;i++){
            ans.push_back(v[i].first);
        }
        
        return ans;
    }
};
