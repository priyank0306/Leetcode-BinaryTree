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
    int left(TreeNode* root,int l)   
    {
        if(root==NULL)
            return l;
         return left(root->left,l+1);
    }  
        int right(TreeNode* root,int r)   
    {
        if(root==NULL)
            return r;
         return right(root->right,r+1);
    }  

    int countNodes(TreeNode* root) {

       if(root==NULL)
       {
           return 0;
}
    int l=left(root->left,1);        
    int r=right(root->right,1);
         
    if(l==r)
    {
        return pow(2,l)-1;
    
}
     
        return 1+countNodes(root->left)+countNodes(root->right);
      
    }
};