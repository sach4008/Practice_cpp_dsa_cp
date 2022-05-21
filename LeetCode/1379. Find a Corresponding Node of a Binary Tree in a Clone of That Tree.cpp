/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        queue<TreeNode*> a,b;
        
        a.push(original);
        b.push(cloned);
        
        while(!a.empty() && !b.empty()){
            TreeNode* x = a.front();
            TreeNode* y = b.front();
            
            a.pop();b.pop();
            
            if(x==NULL)
                continue;
            
            if(x==target)
                return y;
            
            a.push(x->left);
            a.push(x->right);
            b.push(y->left);
            b.push(y->right);
        }
        
        return NULL;
    }
};
