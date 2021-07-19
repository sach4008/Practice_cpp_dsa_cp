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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        
        TreeNode* curr=root;
        
        while(curr!=NULL){
            
            if(curr->left==NULL){
                ans.push_back(curr->val);
                curr=curr->right;
            }
            else{
                TreeNode* prev =curr->left;
                while(prev->right!=NULL && prev->right!=curr){
                    prev=prev->right;
                }
                if (prev -> right == NULL) {
                    prev -> right = curr;
                    ans.push_back(curr -> val);
                    curr = curr -> left;
                }
                else{
                    prev -> right = NULL;
                    curr = curr -> right;
                }
            }
        }
        
        return ans;
    }
};

// class Solution {
// public:
//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int> ans;
        
//         stack<TreeNode* > st;
        
//         TreeNode* curr=root;
//         st.push(curr);
//         while(!st.empty()){
            
//             curr=st.top();
//             st.pop();
//             if(curr==NULL) continue;
//             ans.push_back(curr->val);
//             st.push(curr->right);
//             st.push(curr->left);
//         }
        
//         return ans;
//     }
// };





// class Solution {
// private:
//     void fun (TreeNode* root,vector<int> &ans){
        
//         if(root==NULL) return;
        
//         ans.push_back(root->val);
//         fun(root->left,ans);
//         fun(root->right,ans);
//     }
// public:
//     vector<int> preorderTraversal(TreeNode* root) {
//         vector<int> ans;
        
//         fun(root,ans);
        
//         return ans;
//     }
// };
