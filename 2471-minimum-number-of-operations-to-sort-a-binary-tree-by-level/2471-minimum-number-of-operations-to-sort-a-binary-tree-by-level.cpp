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
    int minSwaps(int arr[], int n)
   {
    pair<int, int> arrPos[n];
    for (int i = 0; i < n; i++)
    {
        arrPos[i].first = arr[i];
        arrPos[i].second = i;
    }
    sort(arrPos, arrPos + n);
    vector<bool> vis(n, false);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (vis[i] || arrPos[i].second == i)
            continue;
        int cycle_size = 0;
        int j = i;
        while (!vis[j])
        {
            vis[j] = 1;
 
            // move to next node
            j = arrPos[j].second;
            cycle_size++;
        }
        if (cycle_size > 0)
        {
            ans += (cycle_size - 1);
        }
    }
    return ans;
}
    int minimumOperations(TreeNode* root) {
        queue<TreeNode*>q;
        if(root==NULL)
            return 0;
        q.push(root);
        int count=0,i;
        while(true)
        {
            int n=q.size();
            if(n==0)
                break;
            vector<int> v;
            while(n--)
            {
                TreeNode* ptr=q.front();
                q.pop();
                v.push_back(ptr->val);
                if(ptr->left!=NULL)
                    q.push(ptr->left);
                if(ptr->right!=NULL)
                    q.push(ptr->right);
            }
            int n1=v.size();
            int a[n1];
            for(i=0;i<n1;i++)
                a[i]=v[i];
            count+=minSwaps(a,n1); 
        }
        return count;
    }
};