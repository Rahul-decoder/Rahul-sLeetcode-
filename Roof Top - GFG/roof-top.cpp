//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find maximum number of consecutive steps 
    //to gain an increase in altitude with each step.
    int maxStep(int a[], int n)
    {
       int maxi=0,i,count=0;
       for(i=0;i<n-1;i++)
       {
           if(a[i+1]-a[i]>0)
            count++;
            else
            {
                maxi=max(maxi,count);
                count=0;
            }
       }
       maxi=max(maxi,count);
       return maxi;
       
    }
};

//{ Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    Solution ob;
	    cout << ob.maxStep(a, n) << endl;
	}
	return 0;
}
// } Driver Code Ends