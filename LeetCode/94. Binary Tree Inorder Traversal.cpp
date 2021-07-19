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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
                
        TreeNode* curr=root;
        
        while(curr!=NULL){
            
            if(curr->left==NULL){
                ans.push_back(curr->val);
                curr=curr->right;
            }
            else{
                TreeNode* prev =curr->left;
                while(prev->right!=NULL){
                    prev=prev->right;
                }
                prev->right=curr;
                TreeNode* tmp=curr;
                curr=curr->left;
                tmp->left=NULL;
            }
        }
        
        return ans;
    }
};



// class Solution {
// public:
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int> ans;
        
//         stack<TreeNode* > st;
        
//         TreeNode* curr=root;
        
//         while((curr!=NULL) || (!st.empty())){
            
//             if(curr!=NULL){
//                 st.push(curr);
//                 curr=curr->left;
//             }
//             else{
//                 curr=st.top();
//                 st.pop();
//                 ans.push_back(curr->val);
//                 curr=curr->right;
//             }
//         }
        
//         return ans;
//     }
// };

// class Solution {
// private:
//     void fun (TreeNode* root,vector<int> &ans){
        
//         if(root==NULL) return;
        
//         fun(root->left,ans);
//         ans.push_back(root->val);
//         fun(root->right,ans);
//     }
// public:
//     vector<int> inorderTraversal(TreeNode* root) {
//         vector<int> ans;
        
//         fun(root,ans);
        
//         return ans;
//     }
// };
