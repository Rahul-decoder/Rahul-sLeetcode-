//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
    public:
    class node{
        public:
        int data;
        node* left;
        node* right;
        node(int d)
        {
            this->data=d;
            this->left=NULL;
            this->right=NULL;
        }
    };
    node* insertbst(node*root,int a)
    {
        if(root==NULL)
        {
            node*temp=new node(a);
            return temp;
        }
        if(a>root->data)
        root->right=insertbst(root->right,a);
        else
        root->left=insertbst(root->left,a);
        return root;
    }
    node* tra(node* root,int a)
    {
        node* succ=NULL;
        while(root!=NULL)
        {
            if(root->data<=a)
            root=root->right;
            else
            {
               succ=root;
               root=root->left;
            }
        }
        return succ;
    }
    void fun(vector<int>&v,int i,vector<int>&res)
    {
        node* root=NULL;
        while(i>=0)
        {
            node* succ;
            root=insertbst(root,v[i]);
            succ=tra(root,v[i]);
            if(succ)
            res.push_back(succ->data);
            else
            res.push_back(-1);
            i--;
        }
    }
    vector<int> findLeastGreater(vector<int>& arr, int n) {
        vector<int> res;
        fun(arr,n-1,res);
        reverse(res.begin(),res.end());
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<int>arr(n);
	    for(int i = 0 ; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findLeastGreater(arr, n);
	    for(auto it : ans){
	        cout << it << " ";
	    }
	    cout <<endl;
	}
	return 0;
}

// } Driver Code Ends