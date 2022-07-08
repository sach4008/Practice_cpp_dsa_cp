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
    pair<int,int> helper(TreeNode* node){
        if(node==NULL)
            return {0,0};
        
        pair<int,int> a,b;
        a=helper(node->left);
        b=helper(node->right);
        
        int c = a.first + b.first + node->val;
        int d = a.second + b.second + 1;
        
        if((c/d)==node->val){
            // cout<<node->val<<" ";
            ans++;
        }
        return {c,d};
    }
public:
    int averageOfSubtree(TreeNode* root) {
        ans = 0;
        pair<int,int> a = helper(root);
        return ans;
    }
};
