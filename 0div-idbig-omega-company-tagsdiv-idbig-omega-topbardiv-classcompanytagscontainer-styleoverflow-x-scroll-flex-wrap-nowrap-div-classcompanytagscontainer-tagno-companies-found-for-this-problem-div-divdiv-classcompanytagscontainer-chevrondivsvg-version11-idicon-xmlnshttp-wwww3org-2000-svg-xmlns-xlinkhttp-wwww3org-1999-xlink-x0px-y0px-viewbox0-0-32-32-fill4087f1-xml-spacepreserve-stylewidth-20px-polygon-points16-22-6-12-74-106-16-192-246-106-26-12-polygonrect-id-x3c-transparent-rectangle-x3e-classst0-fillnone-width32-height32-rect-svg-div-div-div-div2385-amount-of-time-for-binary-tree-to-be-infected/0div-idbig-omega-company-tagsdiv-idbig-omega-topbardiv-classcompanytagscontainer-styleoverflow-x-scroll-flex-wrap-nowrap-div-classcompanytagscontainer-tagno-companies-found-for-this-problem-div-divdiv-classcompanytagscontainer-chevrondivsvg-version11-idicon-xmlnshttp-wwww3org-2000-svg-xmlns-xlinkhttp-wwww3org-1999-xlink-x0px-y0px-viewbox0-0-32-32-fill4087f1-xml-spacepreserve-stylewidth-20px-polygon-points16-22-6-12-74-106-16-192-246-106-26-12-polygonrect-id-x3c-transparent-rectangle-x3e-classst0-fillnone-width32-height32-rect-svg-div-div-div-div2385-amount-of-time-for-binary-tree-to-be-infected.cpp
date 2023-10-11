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
    void printpath(TreeNode* root,int count,TreeNode*blocker)
    {
        if(root==NULL||root==blocker)
            return ;
        maxi=max(maxi,count);
        printpath(root->left,count+1,blocker);
        printpath(root->right,count+1,blocker);
    }
    int findpath(TreeNode*root,int start)
    {
        if(root==NULL)
            return 0;
        if(root->val==start)
        {
            printpath(root,0,NULL);
            return 1;
        }
        int lf=findpath(root->left,start);
        if(lf)
        {
            printpath(root,lf,root->left);
            return lf+1;
        }
        int rf=findpath(root->right,start);
        if(rf)
        {
            printpath(root,rf,root->right);
            return rf+1;
        }
        return 0;
    }
    int amountOfTime(TreeNode* root, int start) {
        findpath(root,start);
        return maxi;
    }
};