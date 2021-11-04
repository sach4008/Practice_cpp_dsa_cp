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
    vector<string> ans;
    void helper(TreeNode* root,string str){
        if(root->left == NULL && root->right == NULL){
            str += to_string(root->val);
            ans.push_back(str);
            return;
        }
        str+= to_string(root->val);
        
        if(root->left) helper(root->left,str+"->");
        if(root->right) helper(root->right,str+"->");
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        if(!root) return ans;
        
        helper(root,"");
        
        return ans;
    }
};