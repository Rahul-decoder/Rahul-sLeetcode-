//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends


class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
       unordered_map<int,int> m1,m2;
       int i,j;
       int n=matrix.size(),m=matrix[0].size();
       for(i=0;i<n;i++)
       {
           for(j=0;j<m;j++)
           {
               if(matrix[i][j]==1)
               {
                   m1[i]=1;
                   m2[j]=1;
               }
           }
       }
       for(auto x:m1)
       {
           int a=x.first;
           for(i=0;i<m;i++)
           matrix[a][i]=1;
       }
       for(auto x:m2)
       {
           int a=x.first;
           for(i=0;i<n;i++)
           matrix[i][a]=1;
       }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--) 
    {
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.booleanMatrix(matrix);


        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}



// } Driver Code Ends