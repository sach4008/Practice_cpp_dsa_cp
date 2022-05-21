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
    vector<vector<int>> ans;
    vector<int> v;
    
    void helper(TreeNode* node,int targetSum,int tmpSum){
        if(node==NULL) return;
        
        tmpSum += node->val;
        v.push_back(node->val);
        
        if(node->left == NULL && node->right == NULL){
            if(targetSum == tmpSum){
                ans.push_back(v);
            }
            
        }
        
        helper(node->left,targetSum,tmpSum);
        helper(node->right,targetSum,tmpSum);
        
        tmpSum -= node->val;
        v.pop_back();
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        helper(root,targetSum,0);
        return ans;
    }
};