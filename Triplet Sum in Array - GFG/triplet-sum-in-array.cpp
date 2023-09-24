//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int a[], int n, int x)
    {
        int i,sum=0,j,k;
        sort(a,a+n);
        for(i=0;i<n-2;i++)
        {
            sum=a[i],j=n-1,k=i+1;
            sum+=a[k];
            sum+=a[j];
            while(k<j)
            {
                if(sum==x)
                return 1;
                else if(sum<x)
                {
                    sum-=a[k];
                    k++;
                    sum+=a[k];
                }
                else
                {
                    sum-=a[j];
                    j--;
                    sum+=a[j];
                }
            }
        }
        if(sum==x)
        return 1;
        return 0;
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends