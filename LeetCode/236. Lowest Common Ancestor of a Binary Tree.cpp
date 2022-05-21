/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    vector<TreeNode*> v1,v2;
    
    TreeNode* helper(TreeNode* node,TreeNode* target,vector<TreeNode*>& v){
        if(node==NULL) return node;
        
        v.push_back(node);
        
        if(node == target){
            return node;
        }
        TreeNode* a = helper(node->left,target,v);
        TreeNode* b = helper(node->right,target,v);
        
        if(a==NULL && b==NULL) v.pop_back();
        
        if(a!=NULL) return a;
        else return b;
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> v1,v2;
        helper(root,p,v1);
        helper(root,q,v2);
        // int ;
        TreeNode* ans = NULL;
        int lim = min(v1.size(),v2.size());
        for(int i=0;i<lim;i++){
            if(v1[i]!=v2[i]) break;
            else ans = v1[i];
        }
        // if(i==0) return root;
        
        return ans;
    }
};