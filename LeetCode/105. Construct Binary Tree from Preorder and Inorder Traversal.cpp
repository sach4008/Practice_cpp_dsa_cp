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
    TreeNode* construct(int &preIndex,vector<int> &inorder, vector<int> &preorder,int inStart,int inEnd,unordered_map<int,int> &mp){
    if(inStart>inEnd) return NULL;
    
    TreeNode* node = new TreeNode (preorder[preIndex]) ;
    ++preIndex;
    if(inStart==inEnd) return node;
    
    int inIndex=mp[preorder[preIndex-1]];
    for(int i=0;i<inorder.size();i++){
        if(inorder[i]==preorder[preIndex-1]){
            inIndex=i;
            break;
        }
    }
    
        
    node->left=construct(preIndex,inorder,preorder,inStart,inIndex-1,mp);
    node->right=construct(preIndex,inorder,preorder,inIndex+1,inEnd,mp);
    return node;
}
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preIndex=0;
        unordered_map<int,int> mp;
        for(int i=0;i<inorder.size();i++){
            mp.insert({inorder[i],i});
        }
        return construct(preIndex,inorder,preorder,0,preorder.size()-1,mp);
    }
};







// class Solution {
    
// private:
//     TreeNode* construct(int &preIndex,vector<int> &inorder, vector<int> &preorder,int inStart,int inEnd){
//     if(inStart>inEnd) return NULL;
    
//     TreeNode* node = new TreeNode (preorder[preIndex]) ;
//     ++preIndex;
//     if(inStart==inEnd) return node;
    
//     // int inIndex=mp[preorder[preIndex-1]];
//     int inIndex=0; 
//     for(int i=0;i<inorder.size();i++){
//         if(inorder[i]==preorder[preIndex-1]){
//             inIndex=i;
//             break;
//         }
//     }
    
        
//     node->left=construct(preIndex,inorder,preorder,inStart,inIndex-1);
//     node->right=construct(preIndex,inorder,preorder,inIndex+1,inEnd);
//     return node;
// }
// public:
//     TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//         int preIndex=0;
//         return construct(preIndex,inorder,preorder,0,preorder.size()-1);
//     }
// };
