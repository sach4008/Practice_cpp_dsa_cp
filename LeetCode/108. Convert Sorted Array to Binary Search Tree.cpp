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
    TreeNode* helper(vector<int>& nums,int a,int b){
        if(b<a) return NULL;
        
        int mid = (b+a)/2;
        
        TreeNode* node = new TreeNode(nums[mid]);
        
        node->left = helper(nums,a,mid-1);
        node->right = helper(nums,mid+1,b);
        
        return node;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int len = nums.size();
        
        return helper(nums,0,len-1);
    }
};