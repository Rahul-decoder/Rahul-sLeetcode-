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
    void inorder(TreeNode *ptr)
    {
        if(ptr!=NULL)
        {
                swap(ptr->left,ptr->right);
            inorder(ptr->left);
            inorder(ptr->right);
        }
    }
    TreeNode* invertTree(TreeNode* root) {
        inorder(root);
        return root;
    }
};