//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        int i,sum=0,j,maxi1=INT_MIN,maxi2=INT_MIN,sum1=0,sum2=0;
        vector<int> v1,v2;
        for(i=0;i<n;i++)
        {
            sum1=0,sum2=0;
            for(j=0;j<n;j++)
            {
                sum1+=matrix[i][j];
                sum2+=matrix[j][i];
            }
            v1.push_back(sum1);
            v2.push_back(sum2);
            maxi1=max(maxi1,sum1);
            maxi2=max(maxi2,sum2);
        }
        sum1=0,sum2=0;
        for(i=0;i<n;i++)
        {
            sum1+=abs(maxi1-v1[i]);
            sum2+=abs(maxi2-v2[i]);
        }
        sum=max(sum1,sum2);
        return sum;
    } 
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends