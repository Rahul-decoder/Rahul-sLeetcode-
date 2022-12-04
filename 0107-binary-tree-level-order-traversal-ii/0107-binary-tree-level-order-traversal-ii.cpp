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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> v;
        if(root==NULL)
            return v;
        q.push(root);
         while(true)
         {
             vector<int> v1;
             int n=q.size();
             if(n==0)
                 break;
             while(n--)
             {
                 TreeNode *ptr=q.front();
                 q.pop();
                 v1.push_back(ptr->val);
                 if(ptr->left!=NULL)
                     q.push(ptr->left);
                 if(ptr->right!=NULL)
                     q.push(ptr->right);
             }
             v.push_back(v1);
         }
        reverse(v.begin(),v.end());
        return v;
    }
};