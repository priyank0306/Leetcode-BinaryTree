/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>nums;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            nums.push_back(temp->val);
            temp=temp->next;
        }
        
         int left=0;
        int right=nums.size()-1;
       return  convert_into_bst(nums,left,right);
    }
};