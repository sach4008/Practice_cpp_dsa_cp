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
    int ans;
    int helper(TreeNode* node,int a,int k){
        if(node == NULL) return 0;
        
        int b = helper(node->left,a,k);
        
        if(a+b == k){
            ans = node->val;
        }
        
        int c = helper(node->right,a+b+1,k);
        
        return b+c+1;
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        helper(root,0,k-1);
        return ans;
    }
};