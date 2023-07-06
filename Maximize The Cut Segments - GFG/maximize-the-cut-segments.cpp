//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        int i;
        vector<int> v(n+1,-1);
        v[0]=0;
        for(i=1;i<n+1;i++)
        {
            if(i>=x)
            {
                if(v[i-x]!=-1)
                v[i]=max(v[i],1+v[i-x]);
            }
            if(i>=y)
            {
                if(v[i-y]!=-1)
                v[i]=max(v[i],1+v[i-y]);
            }
            if(i>=z)
            {
                if(v[i-z]!=-1)
                v[i]=max(v[i],1+v[i-z]);
            }
        }
         if(v[n]==-1)
         return 0;
         return v[n];
    }
};

//{ Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}
// } Driver Code Ends