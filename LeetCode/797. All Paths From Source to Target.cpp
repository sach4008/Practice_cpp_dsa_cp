class Solution {
    vector<vector<int>> ans;
    vector<int> tmp;
    
    void helper(vector<vector<int>>& graph,int i, int target){
        if(i==target) {
            tmp.push_back(target);
            ans.push_back(tmp);
            tmp.pop_back();
            return;
        }
        tmp.push_back(i);
        for(int x:graph[i]){
            helper(graph,x,target);
        }
        tmp.pop_back();
        return;
    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        helper(graph,0,graph.size()-1);
        
        return ans;
    }
};