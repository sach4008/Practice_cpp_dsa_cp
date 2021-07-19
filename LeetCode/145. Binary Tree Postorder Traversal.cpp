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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        TreeNode* curr=root;
        
        while(curr!=NULL){
            
            if(curr->right==NULL){
                ans.push_back(curr->val);
                curr=curr->left;
            }
            else{
                TreeNode* prev =curr->right;
                while(prev->left!=NULL && prev->left!=curr){
                    prev=prev->left;
                }
                if (prev -> left == NULL) {
                    prev -> left = curr;
                    ans.push_back(curr -> val);
                    curr = curr -> right;
                }
                else{
                    prev -> left = NULL;
                    curr = curr -> left;
                }
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};




// class Solution {
// public:
//     vector<int> postorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         if(root==NULL) return ans;
//         stack<TreeNode* > st1;
        
//         TreeNode* curr=root;
//         TreeNode* prev=NULL;
        
//         while(curr!=NULL || !st1.empty()){
            
//             if(curr==NULL){
//                 curr=st1.top();

//                 if(curr->right==NULL || curr->right==prev){
//                     ans.push_back(curr->val);
//                     st1.pop();
//                     prev=curr;
//                     curr=NULL;
//                 }
//                 else{
//                     curr=curr->right;
//                 }
//             }
//             else{
//                 st1.push(curr);
//                 curr=curr->left;
//             }
//         }
//         return ans;
//     }
// };




// class Solution {
// public:
//     vector<int> postorderTraversal(TreeNode* root) {
//         vector<int> ans;
//         if(root==NULL) return ans;
//         stack<TreeNode* > st1;
//         stack<TreeNode* > st2;
        
//         TreeNode* curr=NULL;
//         st1.push(root);
//         while(!st1.empty()){
            
//             curr=st1.top();
//             st1.pop();
//             st2.push(curr);
            
//             if((curr->left)!=NULL) st1.push(curr->left);
            
//             if((curr->right)!=NULL) st1.push(curr->right);
//         }
//         while(!st2.empty()){
//             curr=st2.top();
//             st2.pop();
//             ans.push_back(curr->val);
//         }
        
//         return ans;
//     }
// };




// class Solution {
// private:
//     void fun (TreeNode* root,vector<int> &ans){
        
//         if(root==NULL) return;
        
//         fun(root->left,ans);
//         fun(root->right,ans);
//         ans.push_back(root->val);
//     }
// public:
//     vector<int> postorderTraversal(TreeNode* root) {
//         vector<int> ans;
        
//         fun(root,ans);
        
//         return ans;
//     }
// };
