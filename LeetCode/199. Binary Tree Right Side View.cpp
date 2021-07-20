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
private:
    void fun(TreeNode *root,vector<int> &ans,int d){
        if(root==NULL) return;

        if(d>ans.size()) ans.push_back(root->val);
        fun(root->right,ans,d+1);
        fun(root->left,ans,d+1);
    }
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        fun(root,ans,1);

        
        return ans;
    }
};
