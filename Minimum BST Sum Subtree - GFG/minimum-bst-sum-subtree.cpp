//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }

    Node *buildTree(string s) {
        if (s.length() == 0 || s[0] == 'N') return NULL;

        // Create the root of the tree
        vector<string> str;
        istringstream iss(s);
        for (string s; iss >> s;) str.push_back(s);
        Node *root = new Node(stoi(str[0]));

        // Push the root to the queue
        queue<Node*> q;
        q.push(root);

        // Starting from the second element
        int i = 1;
        while (q.size() > 0 && i < str.size()) {

            // Get and remove the front of the queue
            Node *currNode = q.front();
            q.pop();

            // Get the current node's value from the string
            string currVal = str[i];

            // If the left child is not null
            if (currVal != "N") {

                // Create the left child for the current node
                currNode->left = new Node(stoi(currVal));
                // Push it to the queue
                q.push(currNode->left);
            }

            // For the right child
            i++;
            if (i >= str.size()) break;

            currVal = str[i];

            // If the right child is not null
            if (currVal != "N") {

                // Create the right child for the current node
                currNode->right = new Node(stoi(currVal));

                // Push it to the queue
                q.push(currNode->right);
            }
            i++;
        }

        return root;
    }

    void inorder(Node *root) {
        if (root == NULL) return;
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
};


// } Driver Code Ends
//User function Template for C++
class help{
    public:
    bool isBST;
    int mn;
    int mx;
    int cnt;
    int sum;
    
    help(bool isB, int MN, int MX, int CNT, int Sum){
        isBST = isB;
        mn = MN;
        mx = MX;
        cnt = CNT;
        sum = Sum;
    }
};

class Solution {
public:
    help* fun(Node* root, int& target, int& ans){
        if(root == NULL){
            return new help(true, INT_MAX, INT_MIN, 0, 0);
        }
        
        help* l = fun(root->left, target, ans);
        help* r = fun(root->right, target, ans);
        
        int currMin = min(root->data, min(l->mn, r->mn));
        int currMax = max(root->data, max(l->mx, r->mx));
        int currCnt = 1 + l->cnt + r->cnt;
        int currSum = root->data + l->sum + r->sum;
        
        if(l->isBST && r->isBST && root->data > l->mx && root->data < r->mn){
            if(currSum == target){
                ans = min(ans, currCnt);
            }
            
            return new help(true, currMin, currMax, currCnt, currSum);
        }
        else{
            return new help(false, INT_MIN, INT_MAX, currCnt, currSum);
        }
    }
    
    int minSubtreeSumBST(int target, Node *root) {
        // code here
        int i, j;
        int ans = INT_MAX;
        help* temp = fun(root, target, ans);
        
        if(ans == INT_MAX)
            return -1;
        return ans;
    }
};


//{ Driver Code Starts.


int main(){
    
    int t;
    cin>>t;
    while(t--){
        int target;
        cin>>target;
        string str;
        getline(cin,str);
        getline(cin,str);
        Node node(0);
        Node *root = node.buildTree(str);
        Solution ob;
        int res = ob.minSubtreeSumBST(target, root);
        cout<<res<<endl;
    }
    return 0;
}
// } Driver Code Ends