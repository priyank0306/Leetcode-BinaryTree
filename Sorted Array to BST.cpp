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
    
    TreeNode* convert_into_bst(vector<int>& nums,int left, int right)
    {
        if(left>right)
            return NULL;
        int mid=left+(right-left)/2;
        TreeNode* root=new TreeNode(nums[mid]);
        root->left=convert_into_bst(nums,left,mid-1);
        root->right=convert_into_bst(nums,mid+1,right);
        return root;
        
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int left=0;
        int right=nums.size()-1;
       return  convert_into_bst(nums,left,right);
    }
};