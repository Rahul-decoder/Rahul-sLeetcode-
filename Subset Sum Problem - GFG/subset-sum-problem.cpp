//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        int i,n=arr.size(),j;
       vector<vector<int>> v(n+1,vector<int>(sum+1,0));
       for(i=0;i<n+1;i++)
       {
           for(j=0;j<sum+1;j++)
           {
               if(j==0&&i==0)
               v[i][j]=1;
               else if(j==0)
               v[i][j]=1;
               else if(i==0)
               v[i][j]=0;
               else
               {
                  if(v[i-1][j])
                  v[i][j]=1;
                  else
                  {
                      if(j-arr[i-1]>=0)
                      {
                          if(v[i-1][j-arr[i-1]])
                          v[i][j]=1;
                      }
                  }
               }
               
           }
       }
       return v[n][sum];
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