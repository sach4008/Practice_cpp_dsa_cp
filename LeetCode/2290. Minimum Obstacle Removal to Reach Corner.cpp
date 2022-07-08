        struct cell
        {
            int x, y;
            int distance;
            cell(int x, int y, int distance) :
                x(x), y(y), distance(distance) {}
        };
        bool operator<(const cell& a, const cell& b)
        {
            if (a.distance == b.distance)
            {
                if (a.x != b.x)
                    return (a.x < b.x);
                else
                    return (a.y < b.y);
            }
            return (a.distance < b.distance);
        }
        

class Solution {
    int row,col;
    bool isInsideGrid(int i, int j)
        {
            return (i >= 0 && i < row && j >= 0 && j < col);
        }
public:
    int minimumObstacles(vector<vector<int>>& grid) {
        row = grid.size(), col = grid[0].size();
        
        vector<vector<int>> v(row,vector<int> (col,INT_MAX));
        
        int dx[] = {-1, 0, 1, 0};
        int dy[] = {0, 1, 0, -1};
        
        set<cell> st;
 
        st.insert(cell(0, 0, 0));
        v[0][0] = grid[0][0];
        
        while (!st.empty())
        {
            cell k = *st.begin();
            st.erase(st.begin());

            for (int i = 0; i < 4; i++)
            {
                int x = k.x + dx[i];
                int y = k.y + dy[i];
                if (!isInsideGrid(x, y))
                    continue;

                if (v[x][y] > v[k.x][k.y] + grid[x][y])
                {
                    if (v[x][y] != INT_MAX)
                        st.erase(st.find(cell(x, y, v[x][y])));
                    v[x][y] = v[k.x][k.y] + grid[x][y];
                    st.insert(cell(x, y, v[x][y]));
                }
            }
        }
        
        return v[row-1][col-1];
    }
};
