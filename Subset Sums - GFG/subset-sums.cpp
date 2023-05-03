//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
void fun(vector<int> &arr,int i,int n,vector<int> &v,int sum)
{
    if(i==n)
    {
        v.push_back(sum);
        return;
    }
    fun(arr,i+1,n,v,sum+arr[i]);
    fun(arr,i+1,n,v,sum);
}
    vector<int> subsetSums(vector<int> arr, int n)
    {
        vector<int> v;
        fun(arr,0,n,v,0);
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends