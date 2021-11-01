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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> tmp;
        
        if(root == NULL) return ans;
        
        queue<TreeNode* > q;
        q.push(root);
        q.push(NULL);
        
        while(!q.empty()){
            TreeNode* tp = q.front();
            q.pop();
            
            if(tp == NULL){
                ans.push_back(tmp);
                tmp.clear();
                if(!q.empty()) q.push(NULL);
                
                continue;
            }
            
            tmp.push_back(tp->val);
            if(tp->left!=NULL) q.push(tp->left);
            if(tp->right!=NULL) q.push(tp->right);
        }
        
        return ans;
    }
};