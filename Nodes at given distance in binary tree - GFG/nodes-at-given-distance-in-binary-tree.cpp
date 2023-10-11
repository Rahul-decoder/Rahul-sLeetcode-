//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}


// } Driver Code Ends
/* A binary Tree node
struct Node
{
    int data;
    struct Node *left, *right;
};
*/

class Solution
{
private:

public:
     bool findpath(Node *root,int t,vector<Node*>&ans)
     {
         if(root==NULL)
         return 0;
         if(root->data==t)
         {
             ans.push_back(root);
             return 1;
         }
         if(findpath(root->left,t,ans))
         {
             ans.push_back(root);
             return 1;
         }
         if(findpath(root->right,t,ans))
         {
             ans.push_back(root);
             return 1;
         }
         return 0;
     }
    void printpath(Node *root,int k,Node* blocker,vector<int> &res)
    {
        if(k<0||root==blocker||root==NULL)
        return;
        if(k==0)
        res.push_back(root->data);
        printpath(root->left,k-1,blocker,res);
        printpath(root->right,k-1,blocker,res);
    }
    vector <int> KDistanceNodes(Node* root, int target , int k)
    {
        vector<Node*> ans;
        vector<int> res;
        findpath(root,target,ans);
        for(int i=0;i<ans.size();i++)
            printpath(ans[i],k-i,i==0?NULL:ans[i-1],res);
            sort(res.begin(),res.end());
        return res;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    getchar();
    
    Solution x = Solution();
    
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* head = buildTree(s);
        
        int target, k;
        cin>> target >> k;
        getchar();
        
        vector <int> res = x.KDistanceNodes(head, target, k);
        
        for( int i=0; i<res.size(); i++ )
            cout<< res[i] << " ";
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends