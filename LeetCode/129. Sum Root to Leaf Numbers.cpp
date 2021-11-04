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
    void helper(TreeNode* root,int &sum,int tmp){
        if(root == NULL){
            return;
        }
        if(root->left == NULL && root->right == NULL){
            tmp = tmp*10 + root->val;
            sum+=tmp;
            return;
        }
        
        tmp = tmp*10 + root->val;
        helper(root->left,sum,tmp);
        helper(root->right,sum,tmp);
    }
public:
    int sumNumbers(TreeNode* root) {
        int sum = 0;
        
        helper(root,sum,0);
        
        return sum;
    }
};