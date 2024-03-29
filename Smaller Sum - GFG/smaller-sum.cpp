//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
public:
    vector<long long> smallerSum(int n,vector<int> &arr){
        long long s=0;
        map<int,int> freq;
        unordered_map<int,long long> mpSum;
        for(int i=0;i<n;i++)
        freq[arr[i]]++;
        
        for(auto it:freq)
        {
            mpSum[it.first]=s;
            s=s+it.second*it.first;
        }
        vector<long long> ans;
        for(int i=0;i<n;i++)
        {
            ans.push_back(mpSum[arr[i]]);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob; 
        vector<long long> ans=ob.smallerSum(n,arr);
        for(int i=0;i<n;i++){
            if(i!=n-1){
                cout<<ans[i]<<" ";
            }
            else{
                cout<<ans[i]<<endl;
            }
        }
    }
    return 0;
}
// } Driver Code Ends