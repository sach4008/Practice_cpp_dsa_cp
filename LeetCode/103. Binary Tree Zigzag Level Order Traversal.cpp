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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (root == NULL) {
            return vector<vector<int> > ();
        }
        vector<vector<int> > result;

        queue<TreeNode*> nodesQueue;
        nodesQueue.push(root);
        bool leftToRight = true;

        while ( !nodesQueue.empty()) {
            int size = nodesQueue.size();
            vector<int> row(size);
            for (int i = 0; i < size; i++) {
                TreeNode* node = nodesQueue.front();
                nodesQueue.pop();

                // find position to fill node's value
                int index = (leftToRight) ? i : (size - 1 - i);

                row[index] = node->val;
                if (node->left) {
                    nodesQueue.push(node->left);
                }
                if (node->right) {
                    nodesQueue.push(node->right);
                }
            }
            // after this level
            leftToRight = !leftToRight;
            result.push_back(row);
        }
        return result;
    }
};




// class Solution {
// public:
//     vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
//         vector<vector<int>> ans;
        
//         if(root==NULL) return ans;
//         queue<TreeNode*> q;
        
//         q.push(root);
//         q.push(NULL);
//         TreeNode* curr;
//         bool var=false;
//         while(!q.empty()){
//             vector<int> res;
//             while(true){
//                 curr=q.front();
//                 q.pop();
//                 if(curr==NULL){
//                     if(!q.empty()) q.push(NULL);
//                     break;
//                 }
//                 res.push_back(curr->val);

//                 if(curr->left!=NULL) q.push(curr->left);
//                 if(curr->right!=NULL) q.push(curr->right);
//             }
//             if(var){
//                 reverse(res.begin(),res.end());
//                 var=false;
//             }
//             else var=true;
//             ans.push_back(res);
//         }
//         return ans;
//     }
// };
