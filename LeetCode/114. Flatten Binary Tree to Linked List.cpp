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
public:
    void flatten(TreeNode* root) {
        stack<TreeNode*> st;
        
        st.push(root);
        
        TreeNode* prev = new TreeNode(0);
        
        while(!st.empty()){
            TreeNode* node = st.top();st.pop();
            if(node==NULL)
                continue;
            st.push(node->right);
            st.push(node->left);
            prev->right = node;
            node->left = NULL;
            
            prev = prev->right;
        }
    }
};
