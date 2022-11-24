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
    vector<vector<int>> fun(TreeNode *root)
    {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        if(root==NULL)
            return ans;
        q.push(root);
        while(true)
        {
            int n;
            n=q.size();
            if(n==0)
                return ans;
            vector<int> v; 
            while(n>0)
            {
                TreeNode *ptr=q.front();
                q.pop();
                v.push_back(ptr->val);
                if(ptr->left!=NULL)
                    q.push(ptr->left);
                if(ptr->right!=NULL)
                    q.push(ptr->right);
                n--;
            }
            ans.push_back(v);
        }
        return ans;
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<vector<int>> ans=fun(root);
       int n=ans.size(),i;
        vector<int> v;
        for(i=0;i<n;i++)
        {
            int p=ans[i].size()-1;
            v.push_back(ans[i][p]);
        }
       return v; 
    }
};