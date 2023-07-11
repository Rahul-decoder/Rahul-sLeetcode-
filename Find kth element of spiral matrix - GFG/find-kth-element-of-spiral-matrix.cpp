//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		int mr=0,mc=0,mxc=m-1,mxr=n-1,i;
 		while(k>0)
 		{
 		    for(i=mc;i<=mxc;i++)
 		    {
 		        if(k>0)
 		        k--;
 		        if(k==0)
 		        return a[mr][i];
 		    }
 		    mr++;
 		    for(i=mr;i<=mxr;i++)
 		    {
 		        if(k>0)
 		        k--;
 		        if(k==0)
 		        return a[i][mxc];
 		    }
 		    mxc--;
 		    for(i=mxc;i>=mc;i--)
 		    {
 		        if(k>0)
 		        k--;
 		        if(k==0)
 		        return a[mxr][i];
 		    }
 		    mxr--;
 		    for(i=mxr;i>=mr;i--)
 		    {
 		        if(k>0)
 		        k--;
 		        if(k==0)
 		        return a[i][mc];
 		    }
 		    mc++;
 		}
 		return a[0][0];
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends