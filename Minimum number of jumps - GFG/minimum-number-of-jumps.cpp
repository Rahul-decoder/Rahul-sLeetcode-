//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
       int a[n],i,jump=0,count=0,p=0;
       if(arr[0]==0)
       return -1;
       for(i=0;i<n;i++)
       a[i]=arr[i]+i;
       while(jump<n)
       {
           int maxi=INT_MIN;
           count++;
          for(i=jump+1;i<=a[jump];i++)
          {
              if(i>=n-1)
              return count;
              if(maxi<a[i])
              {
                  maxi=a[i];
                  p=i;
              }
          }
          while(p>=0&&arr[p]==0)
          p--;
          if(p==jump)
          return -1;
          jump=p;
       }
       return count;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends