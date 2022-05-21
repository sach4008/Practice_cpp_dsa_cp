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
    bool isEqui(TreeNode* root1,TreeNode* root2){
        if(root1==NULL && root2==NULL) return true;
        else if(root1==NULL || root2==NULL) return false;
        
        if(root1->val == root2->val){
            bool a = isEqui(root1->left,root2->left);
            bool b = isEqui(root1->right,root2->right);
            
            return a&b;
        }
        else return false;
    }
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL && subRoot==NULL) return true;
        else if(root==NULL || subRoot==NULL) return false;
        
        bool a = isEqui(root,subRoot);
        bool b = isSubtree(root->left,subRoot);
        bool c = isSubtree(root->right,subRoot);
        
        return (a|b|c);
    }
};