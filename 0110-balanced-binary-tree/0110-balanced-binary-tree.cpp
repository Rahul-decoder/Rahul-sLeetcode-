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
    int height(TreeNode *ptr)
    {
        if(ptr==NULL)
            return 0;
        return max(height(ptr->left),height(ptr->right))+1;
    }
    void inorder(TreeNode *ptr,bool &a)
    {
        if(ptr!=NULL)
        {
            inorder(ptr->left,a);
             if(abs(height(ptr->left)-height(ptr->right))>1)
                 a=a&false;
            inorder(ptr->right,a);
        }
    }
    bool isBalanced(TreeNode* root) {
        bool a=true;
        inorder(root,a);
        return a;
    }
};