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
    pair<int,bool> fun(TreeNode* root){
        if(root==NULL){
            return {0,true};
        }
        pair<int,bool> a = fun(root->left);
        pair<int,bool> b = fun(root->right);
        
        if(a.second && b.second){
            if(abs(a.first - b.first) <=1){
                return {max(a.first,b.first)+1,true};
            }
        }
        
        return {-1,false};
    }
public:
    bool isBalanced(TreeNode* root) {
        pair<int,bool> f = fun(root);
        
        return f.second;
    }
};
