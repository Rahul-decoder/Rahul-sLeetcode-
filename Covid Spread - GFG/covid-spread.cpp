//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int helpaterp(vector<vector<int>> hospital)
    {
        vector<pair<int,int>> v;
        int i,j,count=0,n=hospital.size(),m=hospital[0].size(),count1=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(hospital[i][j]==2)
                v.push_back({i,j});
                if(hospital[i][j]==1)
                count++;
            }
        }
        while(v.size()>0)
        {
            vector<pair<int,int>> v1;
            v1=v;
            v.clear();
            for(i=0;i<v1.size();i++)
            {
                int a=v1[i].first,b=v1[i].second;
                if(a+1<n&&hospital[a+1][b]==1)
                {
                    hospital[a+1][b]=2;
                    v.push_back({a+1,b});
                    count--;
                }
                if(a-1>=0&&hospital[a-1][b]==1)
                {
                    hospital[a-1][b]=2;
                    v.push_back({a-1,b});
                    count--;
                }
                if(b-1>=0&&hospital[a][b-1]==1)
                {
                    hospital[a][b-1]=2;
                    v.push_back({a,b-1});
                    count--;
                }
                if(b+1<m&&hospital[a][b+1]==1)
                {
                    hospital[a][b+1]=2;
                    v.push_back({a,b+1});
                    count--;
                }
            }
            count1++;
        }
        if(count>0)
        return -1;
        return --count1;
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int R;int C;
        
        cin>>R>>C;
        vector<vector<int>> hospital;
        int i,j;
        for(i=0;i<R;i++)
         {   vector<int> temp;
             for(j=0;j<C;j++)
            {
                int k;
                cin>>k;
                temp.push_back(k);
            }
            hospital.push_back(temp);
         }
        
        Solution ob;
        int ans = ob.helpaterp(hospital);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends