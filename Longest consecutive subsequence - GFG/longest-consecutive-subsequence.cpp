//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
      int i,maxi=0,ans=0,count=0;
      for(i=0;i<n;i++)
      maxi=max(maxi,arr[i]);
      vector<int> v(maxi+1,0);
      for(i=0;i<n;i++)
      v[arr[i]]=1;
      for(i=0;i<maxi+1;i++)
      {
          if(v[i]==0)
          {
              ans=max(ans,count);
              count=0;
          }
          else
          count++;
      }
      ans=max(ans,count);
      return ans;
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends