//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends

class Solution{   
public:
bool fun(vector<int> &arr,int i,int n,int sum,vector<vector<int>>&v)
{
    if(sum==0)
    return 1;
    if(i>=n||sum<0)
    return 0;
    if(v[i][sum]!=-1)
    return v[i][sum];
    return v[i][sum]=(fun(arr,i+1,n,sum,v) || fun(arr,i+1,n,sum-arr[i],v));
}
    bool isSubsetSum(vector<int>arr, int sum){
        int n=arr.size();
        vector<vector<int>> v(n+1,vector<int>(sum+1,-1));
        return fun(arr,0,n,sum,v);
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends