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
    int helper(TreeNode* node){
        if(node->left == NULL) return node->val;
        
        return helper(node->left);
    }
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) return NULL;
        
        
        if(root->val > key){
            root->left = deleteNode(root->left,key);
            return root;
        }
        if(root->val < key){
            root->right = deleteNode(root->right,key);
            return root;
        }
        
        if(root->left != NULL && root->right != NULL){
            TreeNode* tmp = new TreeNode(helper(root->right));
            tmp->left = root->left;
            tmp->right = deleteNode(root->right,tmp->val);
            return tmp;
        }
        
        if(root->left != NULL) return root->left;
        if(root->right != NULL) return root->right;
        
        return NULL;
    }
};