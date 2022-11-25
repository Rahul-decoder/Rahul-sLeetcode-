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
   int maxi=0;
    int height(TreeNode *ptr)
    {
        if(ptr==NULL)
            return 0;
       return max(height(ptr->left),height(ptr->right))+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int a=height(root->left);
        int b=height(root->right);
        maxi=max(maxi,a+b);
        if(root->left!=NULL)
          diameterOfBinaryTree(root->left);
        if(root->right!=NULL)
            diameterOfBinaryTree(root->right);
        return maxi;
    }
};