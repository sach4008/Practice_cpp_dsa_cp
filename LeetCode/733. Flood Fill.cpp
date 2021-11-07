class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int m = image.size(), n = image[0].size();
        
        queue<pair<int,int> > q;
        
        q.push({sr,sc});
        
        int color = image[sr][sc];
        if(color == newColor) return image;
        
        while(!q.empty()){
            pair<int,int> tmp = q.front();
            q.pop();
            
            if(tmp.first < 0 || tmp.first >= m) continue;
            if(tmp.second < 0 || tmp.second >= n) continue;
            if(image[tmp.first][tmp.second] != color) continue;
            
            image[tmp.first][tmp.second] = newColor;
            
            q.push({tmp.first+1,tmp.second});
            q.push({tmp.first-1,tmp.second});
            q.push({tmp.first,tmp.second+1});
            q.push({tmp.first,tmp.second-1});
        }
        
        return image;
    }
};