//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
        int findNum(int n)
        {
          int high=5*n,low=0,mid=0,p,count=0,mini=0;
          while(low<=high)
          {
              mid=(low+high)/2,p=5,count=0;
              while(mid/p>0)
              {
                 count+=mid/p;
                 p=p*5;
              }
              if(count>=n)
              {
              high=mid-1;
              mini=mid;
              }
              else
              low=mid+1;
          }
          return mini;
        }
};

//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}
// } Driver Code Ends