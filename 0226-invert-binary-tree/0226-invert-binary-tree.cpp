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
    TreeNode* invertTree(TreeNode* root) {
        queue<TreeNode *> q;
        q.push(root);
        if(root==NULL)
            return NULL;
        while(q.size()!=0)
        {
           TreeNode *ptr=q.front();
            q.pop();
            if(ptr!=NULL)
            {
                q.push(ptr->left);
                q.push(ptr->right);
                swap(ptr->left,ptr->right);
            }
        }
        return root;
    }
};