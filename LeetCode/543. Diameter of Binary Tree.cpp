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
    int helper(TreeNode* node,int &d){
        
        if(node==NULL) return 0;
        
        int l=helper(node->left,d);
        int r=helper(node->right,d);
        
        d=max(d,l+r);
        
        return max(l,r)+1;
        
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int d=0;
        
        helper(root,d);
        
        return d;
    }
};