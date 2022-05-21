/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        
        int len = descriptions.size();
        map<int,TreeNode*> mp;
        map<int,bool> f;
        
        for(int i=0;i<len;i++){
            TreeNode* tmp = NULL;
            
            if(mp.find(descriptions[i][0]) == mp.end()){ 
                tmp = new TreeNode(descriptions[i][0]);
                mp.insert({descriptions[i][0],tmp});
            }
            else tmp = mp[descriptions[i][0]];
            TreeNode* a = NULL;
                
            if(mp.find(descriptions[i][1]) == mp.end() ){ 
                a = new TreeNode(descriptions[i][1]);
                mp.insert({descriptions[i][1],a});
            }
            else a = mp[descriptions[i][1]];
            
            if(descriptions[i][2]) tmp->left = a;
            else tmp->right = a;
            
            f[descriptions[i][1]] = false;
            if(f.find(descriptions[i][0])==f.end()) f[descriptions[i][0]] = true;
        }
        
        for(auto &x:f) if(x.second) return mp[x.first];
        
        return NULL;
    }
};