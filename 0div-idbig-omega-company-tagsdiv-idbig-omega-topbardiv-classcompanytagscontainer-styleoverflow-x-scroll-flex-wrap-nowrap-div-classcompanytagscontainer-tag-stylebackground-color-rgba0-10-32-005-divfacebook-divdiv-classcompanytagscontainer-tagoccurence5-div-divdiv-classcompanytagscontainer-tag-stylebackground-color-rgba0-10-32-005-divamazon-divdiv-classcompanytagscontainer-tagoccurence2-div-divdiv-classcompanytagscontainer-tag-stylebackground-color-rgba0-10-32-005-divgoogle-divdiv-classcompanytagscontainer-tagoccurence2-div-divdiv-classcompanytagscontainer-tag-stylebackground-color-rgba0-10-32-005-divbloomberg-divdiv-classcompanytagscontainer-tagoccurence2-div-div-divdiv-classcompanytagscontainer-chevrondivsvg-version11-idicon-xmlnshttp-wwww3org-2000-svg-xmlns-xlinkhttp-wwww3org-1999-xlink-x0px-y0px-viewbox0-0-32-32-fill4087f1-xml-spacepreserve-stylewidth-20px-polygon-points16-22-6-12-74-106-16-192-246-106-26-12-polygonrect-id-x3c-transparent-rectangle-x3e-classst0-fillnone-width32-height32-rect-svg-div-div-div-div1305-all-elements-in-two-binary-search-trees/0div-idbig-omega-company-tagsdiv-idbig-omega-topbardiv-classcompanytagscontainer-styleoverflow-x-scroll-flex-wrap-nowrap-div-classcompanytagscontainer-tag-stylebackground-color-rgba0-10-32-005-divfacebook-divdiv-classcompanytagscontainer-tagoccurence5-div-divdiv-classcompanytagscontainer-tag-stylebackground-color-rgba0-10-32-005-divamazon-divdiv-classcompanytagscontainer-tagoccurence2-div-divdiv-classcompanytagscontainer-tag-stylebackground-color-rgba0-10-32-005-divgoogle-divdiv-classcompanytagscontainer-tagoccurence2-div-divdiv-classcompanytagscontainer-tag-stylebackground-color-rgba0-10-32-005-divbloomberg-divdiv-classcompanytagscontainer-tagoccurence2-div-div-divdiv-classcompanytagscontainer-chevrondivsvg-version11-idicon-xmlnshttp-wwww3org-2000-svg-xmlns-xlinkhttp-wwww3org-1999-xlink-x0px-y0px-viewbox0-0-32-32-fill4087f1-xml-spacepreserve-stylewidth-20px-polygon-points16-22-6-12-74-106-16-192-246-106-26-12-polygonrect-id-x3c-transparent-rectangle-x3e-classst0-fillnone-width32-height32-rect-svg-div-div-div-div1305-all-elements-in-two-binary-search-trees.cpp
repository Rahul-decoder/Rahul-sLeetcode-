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
    void fun(TreeNode* root,vector<int> &v)
    {
       if(root==NULL)
           return;
        fun(root->left,v);
        v.push_back(root->val);
        fun(root->right,v);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> v1,v2,v,res;
        fun(root1,v);
        v1=v;
        v.clear();
        fun(root2,v);
        v2=v;
        int i=0,j=0,n1=v1.size(),n2=v2.size();
        while(i<n1&&j<n2)
        {
            if(v1[i]<v2[j])
            {
                res.push_back(v1[i]);
                i++;
            }
            else
            {
                res.push_back(v2[j]);
                j++;
            }
        }
        while(i<n1)
        {
            res.push_back(v1[i]);
            i++;
        }
        while(j<n2)
        {
            res.push_back(v2[j]);
            j++;
        }
        return res;    
    }
};